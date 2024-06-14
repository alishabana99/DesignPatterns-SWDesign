#include "ThermoAdapter.h"

ThermoAdapter::ThermoAdapter(Thermo &_adaptee) : adaptee(_adaptee)
{
}

ThermoAdapter::~ThermoAdapter()
{
}

void ThermoAdapter::TurnOn()
{
    adaptee.Activate();
}


void ThermoAdapter::TurnOff()
{
    adaptee.Deactivate();
}


bool ThermoAdapter::GetStatus()
{
    return adaptee.IsActivated();
}

