/*
 * File:   botoes.c
 * Author: 20185076
 *
 * Created on 4 de Mar�o de 2021, 14:32
 */

#include <xc.h>

void botoes_init(void)
{
 PORTD = 1;
}

int botao_incrementar( void )
{
    return(PORTDbits.RD3);
}

int botao_decrementar( void )
{
    return(PORTDbits.RD2);
}