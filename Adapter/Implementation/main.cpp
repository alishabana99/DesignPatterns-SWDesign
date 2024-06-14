#include <iostream>
#include "./MobileApp.h"

#include "./SmartLightSystem/SmartLight.h"
#include "./SmartLightSystem/SmartLightAdapter.h"

#include "./ThermoSystem/Thermo.h"
#include "./ThermoSystem/ThermoAdapter.h"

#include "./DoorLockSystem/DoorLock.h"
#include "./DoorLockSystem/DoorLockAdapter.h"


int main() {
    MobileApp application;

    SmartLight room_lamb; 
    SmartLightAdapter lamp_adapter(room_lamb);

    Thermo room_thermo; 
    ThermoAdapter thermo_adapter(room_thermo);

    DoorLock room_lock; 
    DoorLockAdapter lock_adapter(room_lock);

    application.AddDevice(10,lamp_adapter);
    application.AddDevice(20,thermo_adapter);
    application.AddDevice(30,lock_adapter);

    application.TurnOnDevice(20);
    return 0;
}