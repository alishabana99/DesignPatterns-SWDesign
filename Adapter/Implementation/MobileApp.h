#ifndef MOBILE_APP_H
#define MOBILE_APP_H


#include <map>
#include <functional>
#include <iostream>
#include "IApplication.h"


class MobileApp{

public: 
void AddDevice(int idx, IApplication& device);
void TurnOnDevice(int idx);
void TurnOffDevice(int idx);
bool GetDeviceStatus(int idx);


private:
std::map<int,std::reference_wrapper<IApplication>> devices;

};


#endif //MOBILE_APP_H