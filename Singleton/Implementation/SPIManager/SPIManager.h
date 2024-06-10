#include "../SPIConfig/SPIConfig.h"
#include <iostream>
#include <mutex>

class SPIManager
{
public:
    /*methods*/
    static SPIManager &GetInstance(SPIConfig *config);
    void WriteByte(uint8_t data);
    uint8_t ReadByte();

private:
    /*data*/
    /*data*/
    static SPIManager spi;
    static SPIConfig *current_config;
    static std::mutex _mutex;

    /*methods*/
    SPIManager(SPIConfig *config); // private: so, preventing users from making new objects directly.
    static void UpdateConfigs(SPIConfig *config);
    SPIManager(SPIManager &other) = delete;           // preventing copy constructor
    void operator=(const SPIManager &other) = delete; // preventing copy assignment
};
