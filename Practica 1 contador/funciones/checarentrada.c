/*
 * checarentrada.c
 *
 *  Created on: Feb 14, 2018
 *      Author: Diego Romo C
 */
#include "fsl_gpio.h"
#include "stdtypes.h"
#include "inicializar.h"
T_UBYTE BanderaPresionado;
int Checar_Entrada(void)
{
T_UBYTE ValorIncremento;
T_UBYTE BotonIncremento;
T_ULONG Debounce;
Debounce =False;
ValorIncremento = 0u;
BotonIncremento = True;
BotonIncremento = GPIO_ReadPinInput(GPIOB,Incremento_Boton);
	while(BotonIncremento == False)
	{
		if(Debounce == 30000)
		{
			GPIO_WritePinOutput(GPIOB,LED_Red,False);
			BanderaPresionado = True;
		}
		if(Debounce == 150000)
		{
		GPIO_WritePinOutput(GPIOB,LED_Green,False);
		break;
		}
	Debounce+=True;
	BotonIncremento = GPIO_ReadPinInput(GPIOB,Incremento_Boton);
	}
	if(BanderaPresionado == True && BotonIncremento == True)
	{
	BanderaPresionado = False;
	ValorIncremento=True;
	}
else
	{
		GPIO_WritePinOutput(GPIOB,LED_Red,True);
	ValorIncremento = False;
	}
return ValorIncremento;
}
