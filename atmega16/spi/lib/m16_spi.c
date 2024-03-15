/**
 * @file m16_spi.c
 * @author your name (you@domain.com)
 * @brief spi device drvier code
 * @version 0.1
 * @date 2024-03-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "m16_spi.h"

/**
 * @brief initiallize spi for given mode of operation
 * 
 * @param mode either MASTER_MODE or SLAVE_MODE (macros)
 * 
 * @return void
 */
void spi_init(uint8_t mode)
{
    if (mode == MASTER_MODE)
    {
        SPI_MASTER_MODE(SPI_F_CPU_BY_16,NORMAL_SPEED);
    }
    else if (mode == SLAVE_MODE)
    {
        SPI_SLAVE_MODE;
    }
    // #endif
}


uint8_t spi_send_byte(uint8_t byte)
{
    SPDR = byte;   // transmit byte 
    while(POLL_BIT(SPI_FLAGS_REG,SPI_FLAG) == 0); // wit till data sent

    return SPDR;   // reading SPDR will return received data
}