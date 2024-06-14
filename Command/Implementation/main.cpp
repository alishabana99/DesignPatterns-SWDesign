#include "./Receiver/RoboticArm.h"

#include "./Command/MoveCommand.h"
#include "./Command/PlaceCommand.h"
#include "./Command/PickCommand.h"

#include "./Invoker/ArmController.h"

#include "./Logger/ConsoleLogger.h"

#include <memory>

int main(){

    RoboticArm arm; 
    ConsoleLogger logger;
    
    PlaceCommand place_cmd(arm,logger); 
    PickCommand pick_cmd(arm,logger); 
    MoveCommand move_cmd(arm,logger,10,10,10);

    ArmController ctrl;

    ctrl.Execute(&move_cmd);
    ctrl.Undo();

    ctrl.Execute(&pick_cmd);
    

    return 0;

}