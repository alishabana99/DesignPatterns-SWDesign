#include "PlaceCommand.h"

PlaceCommand::PlaceCommand(RoboticArm &arm, ILogger &_logger)
    : receiver{arm}, logger{_logger}
{
}
PlaceCommand::~PlaceCommand()
{
}

void PlaceCommand::Execute()
{
    this->prev_arm_state = receiver.GetArmState(); // saving the state befor changing it.
    receiver.Place();
    logger.Log("Arm placed an object.");
}
void PlaceCommand::Undo()
{
    if (prev_arm_state.gripper_empty == false)
    { // it was holding something
        receiver.Pick();
        logger.Log("Undo: Arm Picked the object again");
    }
    else
    {
        // it wasn't holding anything
        receiver.Place();
        logger.Log("Undo: Arm Placed the object");
    }
}
