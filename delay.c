/*
 * File:   delay.c
 * Author: 20185076
 *
 * Created on 4 de Março de 2021, 14:31
 */



#include <xc.h>
#include "config.h"

void delay( unsigned int t)
{
    while(t)
    {   
        __delay_ms(1);  
        --t;
    }
}