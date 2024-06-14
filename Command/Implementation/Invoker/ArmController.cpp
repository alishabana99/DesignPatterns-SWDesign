#include "ArmController.h"

ArmController::ArmController()
{
}

ArmController::~ArmController()
{
}

void ArmController::Execute(ICommand* cmd)
{
    cmd->Execute();
    cmd_history.push(cmd);
}

void ArmController::Undo()
{
    if (!cmd_history.empty())
    {
        cmd_history.top()->Undo();
        cmd_history.pop();
    }
}