#ifndef ARM_CONTROLLER_H
#define ARM_CONTROLLER_H

#include <stack>
#include "../Command/ICommand.h"

class ArmController
{
private:
    std::stack<ICommand*> cmd_history;     
    
public:
    ArmController();
    ~ArmController();
    void Execute(ICommand* cmd);
    void Undo();
};

#endif //ARM_CONTROLLER_H