/*
 * File:   contatores.c
 * Author: 20185076
 *
 * Created on 4 de Mar�o de 2021, 14:32
 */



#include <xc.h>

void contatores_init( void )
{

  TRISDbits.TRISD5 = 0;  
  TRISDbits.TRISD6 = 0;  
  TRISDbits.TRISD7 = 0;
  
  PORTDbits.RD5 = 0;
  PORTDbits.RD6 = 0;
  PORTDbits.RD7 = 0;  

} 


int k1_status(void)
{
    return(PORTDbits.RD7);
}

int k3_status(void)
{
    return(PORTDbits.RD5);
}

void k1( int x )
{
    PORTDbits.RD7 = x;
}

void k2( int x )
{
    PORTDbits.RD6 = x;
       
}
void k3 ( int x)
{
    PORTDbits.RD5 = x;
}