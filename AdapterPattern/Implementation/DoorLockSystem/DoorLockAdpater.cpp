#include "DoorLockAdapter.h"

DoorLockAdapter::DoorLockAdapter(DoorLock &_adaptee) : adaptee(_adaptee)
{
}

DoorLockAdapter::~DoorLockAdapter()
{
}

void DoorLockAdapter::TurnOn()
{
    adaptee.Lock();
}

void DoorLockAdapter::TurnOff()
{
    adaptee.Unlock();
}

bool DoorLockAdapter::GetStatus()
{
    return adaptee.IsLocked();
}