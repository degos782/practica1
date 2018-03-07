/*
 * Copyright (c) 2017, NXP Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of NXP Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
 
/**
 * @file    Practica 1 contador.c
 * @brief   Application entry point.
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "numeros.h"
#include "stdtypes.h"
/* TODO: insert other include files here. */

/* TODO: insert other definitions and declarations here. */

/*
 * @brief   Application entry point.
 */
int main(void) {

  	/* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
  	/* Init FSL debug console. */
    BOARD_InitDebugConsole();
    //Contador funciones
    T_UBYTE ValorIncremento,ValorContador,ValorDecremento,ValorReinicio;
    ValorIncremento = ValorContador = ValorDecremento = ValorReinicio = 0u;
    iniciar();
    for(;;)
    {
    ValorIncremento = Checar_Entrada();
    ValorDecremento = ChecarDecremento();
    ValorReinicio = ChecarReinicio();
    if(ValorReinicio == 1)
    {
    Numero0();
    ValorContador = 0;
    }
    else if(ValorContador==9 & ValorIncremento==1)
    {
    Numero0();
    ValorContador = 0;
    }
    else if(ValorContador==0 & ValorDecremento==1)
	{
	Numero9();
	ValorContador = 9;
	}
	else
    {
    ValorContador = ValorContador+ValorIncremento-ValorDecremento;
    if (ValorContador==0)
    {
    Numero0();
    }
    else if(ValorContador==1)
    {
    Numero1();
    }
    else if(ValorContador==2)
    {
    Numero2();
    }
    else if(ValorContador==3)
    {
    Numero3();
    }
    else if(ValorContador==4)
    {
    Numero4();
    }
    else if(ValorContador==5)
    {
    Numero5();
    }
    else if(ValorContador==6)
    {
    Numero6();
    }
    else if(ValorContador==7)
    {
    Numero7();
    }
    else if(ValorContador==8)
    {
    Numero8();
    }
    else if(ValorContador==9)
    {
    Numero9();
    }
    else
    {

    }
    }
    //delay();
    }
    return 0 ;
}
void delay(void)
{
int i;
	for(i=0;i<=399999;i++)
	{}
}

