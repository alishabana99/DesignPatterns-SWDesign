#ifndef DOOR_LOCK_H
#define DOOR_LOCK_H

class DoorLock
{

public:
    DoorLock();
    ~DoorLock();

    void Lock();
    void Unlock();
    bool IsLocked();

private:
    bool state;
};


#endif //DOOR_LOCK_H