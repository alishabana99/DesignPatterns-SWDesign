#include "SmartLight.h"

SmartLight::SmartLight()
{
    this->state = false;
}

SmartLight::~SmartLight()
{
}

void SmartLight::PowerOn()
{
    this->state = true;
}

void SmartLight::PowerOff()
{
    this->state = false;
}

bool SmartLight::IsOn()
{
    return this->state;
}
