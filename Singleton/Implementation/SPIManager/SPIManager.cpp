#include "SPIManager.h"

/*data*/
SPIConfig *SPIManager::current_config = nullptr;
std::mutex SPIManager::_mutex;

/*methods*/

SPIManager::SPIManager(SPIConfig *config)
{
    SPIManager::current_config = config;
    std::cout << "-------------\n"
              << "Created SPIManager:\n"
              << "mode: " << config->mode << "\n"
              << "dataOrder: " << config->dataOrder << "\n"
              << "clockRate: " << config->clockRate << "\n"
              << "slaveSelect: " << static_cast<uint32_t>(config->slaveSelect) << "\n"
              << "-------------\n";
}

void SPIManager::UpdateConfigs(SPIConfig *config)
{
    SPIManager::current_config = config;
    std::cout << "-------------\n"
              << "Updated SPIManager:\n"
              << "mode: " << config->mode << "\n"
              << "dataOrder: " << config->dataOrder << "\n"
              << "clockRate: " << config->clockRate << "\n"
              << "slaveSelect: " << static_cast<uint32_t>(config->slaveSelect) << "\n"
              << "-------------\n";
}

SPIManager &SPIManager::GetInstance(SPIConfig *config)
{
    static SPIManager spi(config); // thread-safe

    std::lock_guard<std::mutex> lock(_mutex);
    if (SPIManager::current_config != config)
    {
        SPIManager::UpdateConfigs(config);
    }

    return spi;
}

void SPIManager::WriteByte(uint8_t data)
{
    std::lock_guard<std::mutex> lock(_mutex);
    std::cout << "SPI wrote: " << static_cast<uint32_t>(data)
              << " to slaveSelect: " << static_cast<uint32_t>(SPIManager::current_config->slaveSelect)
              << std::endl;
}

uint8_t SPIManager::ReadByte()
{
    std::lock_guard<std::mutex> lock(_mutex);
    uint8_t spi_data = 123;
    std::cout << "SPI got: " << static_cast<uint32_t>(spi_data)
              << " from slaveSelect: " << static_cast<uint32_t>(SPIManager::current_config->slaveSelect)
              << std::endl;

    return spi_data;
}
