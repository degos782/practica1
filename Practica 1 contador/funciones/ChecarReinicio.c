/*
 * ChecarReinicio.c
 *
 *  Created on: Feb 20, 2018
 *      Author: Diego Romo C
 */

#include "fsl_gpio.h"
#include "stdtypes.h"
#include "inicializar.h"
T_UBYTE BanderaPresionadoR;
int ChecarReinicio(void)
{
T_UBYTE ValorReinicio;
T_UBYTE BotonReinicio;
ValorReinicio = False;
BotonReinicio= False;
BotonReinicio = GPIO_ReadPinInput(GPIOB,Reinicio_Boton);

	if(BotonReinicio == False)
	{
	GPIO_WritePinOutput(GPIOD,LED_Blue,False);
	BanderaPresionadoR = True;
	}
	else if(BanderaPresionadoR == True && BotonReinicio == True)
	{
	BanderaPresionadoR=False;
	ValorReinicio =True;
	}
	else
	{
	GPIO_WritePinOutput(GPIOD,LED_Blue,True);
	ValorReinicio=False;
	}
return ValorReinicio;
}

