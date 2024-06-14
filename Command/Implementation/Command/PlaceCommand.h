#ifndef PLACE_COMMAND_H
#define PLACE_COMMAND_H

#include "ICommand.h"
#include "RoboticArm.h"

class PlaceCommand : public ICommand
{
private:

ArmState_t prev_arm_state; 
RoboticArm& receiver; 
ILogger& logger;

public:
    PlaceCommand(RoboticArm & arm, ILogger& _logger);
    ~PlaceCommand();

    void Execute() override;
    void Undo() override;


};


#endif //PLACE_COMMAND_H