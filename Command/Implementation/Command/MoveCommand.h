#ifndef MOVE_COMMAND_H
#define MOVE_COMMAND_H

#include "ICommand.h"
#include "RoboticArm.h"

class MoveCommand : public ICommand
{
private:

ArmState_t prev_arm_state; 
RoboticArm& receiver; 
ILogger& logger;
uint16_t x;
uint16_t y;
uint16_t z;

public:
    MoveCommand(RoboticArm& arm,ILogger& _logger, uint16_t _x, uint16_t _y, uint16_t _z);
    ~MoveCommand();

    void Execute() override;
    void Undo() override;


};


#endif //MOVE_COMMAND_H