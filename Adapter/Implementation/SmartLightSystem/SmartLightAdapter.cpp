#include "SmartLightAdapter.h"

SmartLightAdapter::SmartLightAdapter(SmartLight &_adaptee) : adaptee(_adaptee)
{
}

SmartLightAdapter::~SmartLightAdapter()
{
}

void SmartLightAdapter::TurnOn()
{
    adaptee.PowerOn();
}

void SmartLightAdapter::TurnOff()
{
    adaptee.PowerOff();
}

bool SmartLightAdapter::GetStatus()
{
    return adaptee.IsOn();
}
