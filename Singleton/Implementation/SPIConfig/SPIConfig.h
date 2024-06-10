#include <stdint.h>

typedef enum
{
    SPI_MODE0 = 0,
    SPI_MODE1,
    SPI_MODE2,
    SPI_MODE3
} SPIMode;


typedef enum
{
    SPI_MSB = 0,
    SPI_LSB
} SPIDataOrder;

typedef enum
{
    SPI_CLOCK_DIV_2 = 0,
    SPI_CLOCK_DIV_4,
    SPI_CLOCK_DIV_8,
    SPI_CLOCK_DIV_16,
    SPI_CLOCK_DIV_32,
    SPI_CLOCK_DIV_64,
    SPI_CLOCK_DIV_128
} SPIClockRate;

typedef enum
{
    SPI_MASTER = 0,
    SPI_SLAVE
} SPIMasterSlave;

typedef enum
{
    SPI_INT_DISABLE = 0,
    SPI_INT_ENABLE
} SPIInterruptEnable;

typedef enum
{
    PIN0 = 0,
    PIN1,
    PIN2,
    PIN3,
    PIN4,
    PIN5,
    PIN6,
    PIN7
} Pin;

typedef struct
{
    SPIMode mode;
    SPIDataOrder dataOrder;
    SPIClockRate clockRate;
    SPIMasterSlave masterSlave;
    SPIInterruptEnable interruptEnable;
    uint8_t slaveSelect;
} SPIConfig;
