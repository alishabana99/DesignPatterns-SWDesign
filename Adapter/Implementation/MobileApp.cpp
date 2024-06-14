#include "MobileApp.h"

void MobileApp::AddDevice(int idx, IApplication &device)
{
    this->devices.emplace(idx, std::ref(device));
}

void MobileApp::TurnOnDevice(int idx)
{
    auto it = devices.find(idx);
    if (it == devices.end())
    {
        // error: DEVICE NOT FOUND
    }
    else
    {
        it->second.get().TurnOn();

        std::cout << "Device#" << idx << ": ON" << std::endl;
    }
}

void MobileApp::TurnOffDevice(int idx)
{
    auto it = devices.find(idx);
    if (it == devices.end())
    {
        // error: DEVICE NOT FOUND
    }
    else
    {
        it->second.get().TurnOff();

        std::cout << "Device#" << idx << ": OFF" << std::endl;
    }
}

bool MobileApp::GetDeviceStatus(int idx)
{
    auto it = devices.find(idx);
    if (it == devices.end())
    {
        // error: DEVICE NOT FOUND
    }
    else
    {
        return it->second.get().GetStatus();
    }
}
