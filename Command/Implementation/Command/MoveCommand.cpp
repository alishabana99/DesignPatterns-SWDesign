#include "MoveCommand.h"

MoveCommand::MoveCommand(RoboticArm &arm, ILogger &_logger, uint16_t _x, uint16_t _y, uint16_t _z)
    : receiver{arm}, logger{_logger}, x{_x}, y{_y}, z{_z}
{
    prev_arm_state = arm.GetArmState();
}
MoveCommand::~MoveCommand()
{
}

void MoveCommand::Execute()
{
    this->prev_arm_state = receiver.GetArmState(); // saving the state befor changing it.
    receiver.Move(x, y, z);
    logger.Log("Arm moved to (" + std::to_string(x) +","+ std::to_string(y) +","+ std::to_string(z) + ")");
}


void MoveCommand::Undo()
{
    receiver.Move(this->prev_arm_state.x,
                  this->prev_arm_state.y,
                  this->prev_arm_state.z);

    logger.Log("Undo: Arm returned to (" + std::to_string(this->prev_arm_state.x) +
               +","+std::to_string(this->prev_arm_state.y) +
               +","+std::to_string(this->prev_arm_state.z) + ")");
}
