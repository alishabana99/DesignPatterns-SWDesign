#include "RoboticArm.h"

RoboticArm::RoboticArm() :state(0, 0, 0, true)
{
}

RoboticArm::RoboticArm(uint16_t _x, uint16_t _y, uint16_t _z, bool _gripper_empty)
    : state(_x, _y, _z, _gripper_empty)
{
}

RoboticArm::~RoboticArm() {}

void RoboticArm::Move(uint16_t _x, uint16_t _y, uint16_t _z)
{
    this->state.x = _x;
    this->state.y = _y;
    this->state.z = _z;
}

void RoboticArm::Pick()
{
    this->state.gripper_empty = false;
}

void RoboticArm::Place()
{
    this->state.gripper_empty = true;

}

ArmState_t RoboticArm::GetArmState()
{
    return state;
}