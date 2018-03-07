/*
 * ChecarDecremento.c
 *
 *  Created on: Feb 20, 2018
 *      Author: Diego Romo C
 */
#include "fsl_gpio.h"
#include "stdtypes.h"
#include "inicializar.h"
T_UBYTE BanderaPresionadoD;
int ChecarDecremento(void)
{
T_UBYTE ValorDecremento;
T_UBYTE BotonDecremento;
ValorDecremento =False;
BotonDecremento = True;
BotonDecremento = GPIO_ReadPinInput(GPIOB,Decremento_Boton);
if(BotonDecremento==False)
	{
	GPIO_WritePinOutput(GPIOB,LED_Green,False);
	BanderaPresionadoD=True;
	}
	else if(BotonDecremento== True && BanderaPresionadoD==True)
	{
	BanderaPresionadoD=False;
	ValorDecremento=True;
	}
	else
	{
		GPIO_WritePinOutput(GPIOB,LED_Green,True);
	ValorDecremento=False;
	}
return ValorDecremento;
}
