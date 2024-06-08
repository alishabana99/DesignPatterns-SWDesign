#ifndef THERMO_H
#define THERMO_H

class Thermo
{

public:
    Thermo();
    ~Thermo();

    void Activate();
    void Deactivate();
    bool IsActivated();

private:
    bool state;
};

#endif //THERMO_H