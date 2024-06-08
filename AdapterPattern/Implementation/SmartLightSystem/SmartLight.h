#ifndef SMART_LIGHT_H
#define SMART_LIGHT_H

class SmartLight
{

public:
    SmartLight();
    ~SmartLight();

    void PowerOn();
    void PowerOff();
    bool IsOn();

private:
    bool state;
};

#endif //SMART_LIGHT_H