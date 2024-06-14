#ifndef SMART_LIGHT_ADAPTER_H
#define SMART_LIGHT_ADAPTER_H

#include "SmartLight.h"
#include "../IApplication.h"

class SmartLightAdapter : public IApplication
{

public:
    SmartLightAdapter(SmartLight &_adaptee);
    ~SmartLightAdapter();

    void TurnOn();
    void TurnOff();
    bool GetStatus();

private:
    SmartLight adaptee;
};

#endif