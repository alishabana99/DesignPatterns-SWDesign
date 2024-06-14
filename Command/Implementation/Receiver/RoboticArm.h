#ifndef ROBOT_ARM_H
#define ROBOT_ARM_H

#include <stdint.h>

struct ArmState_t
{
    uint16_t x;
    uint16_t y;
    uint16_t z;
    bool gripper_empty;

    ArmState_t()
    {
        x = 0;
        y = 0;
        z = 0;
        gripper_empty = true;
    }

    ArmState_t(uint16_t x, uint16_t y, uint16_t z, bool gripp)
    : x(x), y(y) ,z(z), gripper_empty(gripp){
        
    }
};

class RoboticArm
{
private:
    ArmState_t state;

public:
    RoboticArm();
    RoboticArm(uint16_t _x, uint16_t _y, uint16_t _z, bool _gripper_empty);
    ~RoboticArm();
    void Move(uint16_t _x, uint16_t _y, uint16_t _z);
    void Pick();
    void Place();
    ArmState_t GetArmState();
};

#endif // ROBOT_ARM_H