#ifndef DOOR_LOCK_ADAPTER_H
#define DOOR_LOCK_ADAPTER_H

#include "DoorLock.h"
#include "../IApplication.h"

class DoorLockAdapter : public IApplication
{

public:
    DoorLockAdapter(DoorLock &_adaptee);
    ~DoorLockAdapter();

    void TurnOn();
    void TurnOff();
    bool GetStatus();

private:
    DoorLock &adaptee;
};

#endif //DOOR_LOCK_ADAPTER_H