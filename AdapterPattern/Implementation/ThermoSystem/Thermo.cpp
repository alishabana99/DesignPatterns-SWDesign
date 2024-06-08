#include "Thermo.h"

Thermo::Thermo()
{
    this->state = false;
}

Thermo::~Thermo()
{
}

void Thermo::Activate()
{
    this->state = true;
}

void Thermo::Deactivate()
{
    this->state = false;
}

bool Thermo::IsActivated()
{
    return state;
}
