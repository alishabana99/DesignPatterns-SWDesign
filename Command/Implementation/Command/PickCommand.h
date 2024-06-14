#ifndef PICK_COMMAND_H
#define PICK_COMMAND_H

#include "ICommand.h"
#include "RoboticArm.h"

class PickCommand : public ICommand
{
private:

ArmState_t prev_arm_state; 
RoboticArm& receiver; 
ILogger& logger;

public:
    PickCommand(RoboticArm & arm, ILogger& _logger);
    ~PickCommand();

    void Execute() override;
    void Undo() override;


};


#endif //PICK_COMMAND_H

