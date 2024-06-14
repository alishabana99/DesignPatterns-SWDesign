#ifndef IAPPLICATION_H
#define IAPPLICATION_H

class IApplication{
    public:
    virtual void TurnOn() = 0;
    virtual void TurnOff() = 0;
    virtual bool GetStatus() = 0;
};

#endif //IAPPLICATION_H