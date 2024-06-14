#include "PickCommand.h"

PickCommand::PickCommand(RoboticArm& arm, ILogger &_logger) 
: receiver{arm}, logger{_logger}
{
}
PickCommand::~PickCommand()
{
}

void PickCommand::Execute()
{
    this->prev_arm_state = receiver.GetArmState(); //saving the state befor changing it.
    receiver.Pick();
    logger.Log("Arm picked an object.");
}
void PickCommand::Undo()
{
    if(prev_arm_state.gripper_empty == false){ //it was holding something
        receiver.Pick();
    logger.Log("Undo: Picked the object again");

    }else{
        //it wasn't holding anything
        receiver.Place();
        logger.Log("Undo: Placed the object");

    }

    
}

