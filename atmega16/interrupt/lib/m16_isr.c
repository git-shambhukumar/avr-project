/**
 * @file m16_isr.c
 * @author shambhu kumar (you@domain.com)
 * @brief define all ISR(interrupt sub-routines) in this file
 * @version 0.1
 * @date 2024-01-27
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "m16_interrupt.h"



ISR(INT0_vect)
{
    GPIO_OUTPUT_HIGH(PORTA,PA0);
}

ISR(BADISR_vect)
{
    
}


