#ifndef THERMO_ADAPTER_H
#define THERMO_ADAPTER_H

#include "Thermo.h"
#include "../IApplication.h"

class ThermoAdapter : public IApplication
{
public:
    ThermoAdapter(Thermo &_adaptee);
    ~ThermoAdapter();

    void TurnOn();
    void TurnOff();
    bool GetStatus();

private:
    Thermo &adaptee;
};

#endif //THERMO_ADAPTER_H