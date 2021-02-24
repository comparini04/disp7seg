/*
 * File:   delay.c
 * Author: 20185307
 *
 * Created on 24 de Fevereiro de 2021, 14:07
 */


#include <xc.h>
#include "config.h"


void delay (int t)
{
 while(t)
    {
        --t;
        __delay_ms(1);
    }
}