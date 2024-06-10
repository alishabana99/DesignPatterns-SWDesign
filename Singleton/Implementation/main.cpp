#include "./SPIManager/SPIManager.h"
#include <iostream>

int main()
{
    SPIConfig config1;
    config1.clockRate = SPI_CLOCK_DIV_16;
    config1.dataOrder = SPI_MSB;
    config1.interruptEnable = SPI_INT_DISABLE;
    config1.masterSlave = SPI_MASTER;
    config1.mode = SPI_MODE0;
    config1.slaveSelect = PIN0;

    SPIConfig config2;
    config2.clockRate = SPI_CLOCK_DIV_2;
    config2.dataOrder = SPI_MSB;
    config2.interruptEnable = SPI_INT_DISABLE;
    config2.masterSlave = SPI_MASTER;
    config2.mode = SPI_MODE1;
    config2.slaveSelect = PIN3;

    SPIManager::GetInstance(&config1).WriteByte(10);
    SPIManager::GetInstance(&config2).ReadByte();
    return 0;
}