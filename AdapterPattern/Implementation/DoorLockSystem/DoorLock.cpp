#include "DoorLock.h"



DoorLock::DoorLock()
{
    this->state = false;
}

DoorLock::~DoorLock()
{
}

void DoorLock::Lock()
{
    this->state = true;
}

void DoorLock::Unlock()
{
    this->state = false;
}

bool DoorLock::IsLocked()
{
    return this->state;
}
