/*
 * numeros.c
 *
 *  Created on: Feb 20, 2018
 *      Author: Diego Romo C
 */

#include "fsl_gpio.h"
#include "numeros.h"
#include "inicializar.h"
#include "stdtypes.h"
void Numero0(void)
{
	GPIO_WritePinOutput(GPIOC,LED_A,False);
	GPIO_WritePinOutput(GPIOC,LED_B,False);
	GPIO_WritePinOutput(GPIOC,LED_C,False);
	GPIO_WritePinOutput(GPIOC,LED_D,False);
	GPIO_WritePinOutput(GPIOC,LED_E,False);
	GPIO_WritePinOutput(GPIOC,LED_F,False);
	GPIO_WritePinOutput(GPIOC,LED_G,True);
return;
}
void Numero1(void)
{
	GPIO_WritePinOutput(GPIOC,LED_A,True);
	GPIO_WritePinOutput(GPIOC,LED_B,False);
	GPIO_WritePinOutput(GPIOC,LED_C,False);
	GPIO_WritePinOutput(GPIOC,LED_D,True);
	GPIO_WritePinOutput(GPIOC,LED_E,True);
	GPIO_WritePinOutput(GPIOC,LED_F,True);
	GPIO_WritePinOutput(GPIOC,LED_G,True);
return;
}
void Numero2(void)
{
	GPIO_WritePinOutput(GPIOC,LED_A,False);
	GPIO_WritePinOutput(GPIOC,LED_B,False);
	GPIO_WritePinOutput(GPIOC,LED_C,True);
	GPIO_WritePinOutput(GPIOC,LED_D,False);
	GPIO_WritePinOutput(GPIOC,LED_E,False);
	GPIO_WritePinOutput(GPIOC,LED_F,True);
	GPIO_WritePinOutput(GPIOC,LED_G,False);
return;
}
void Numero3(void)
{
	GPIO_WritePinOutput(GPIOC,LED_A,False);
	GPIO_WritePinOutput(GPIOC,LED_B,False);
	GPIO_WritePinOutput(GPIOC,LED_C,False);
	GPIO_WritePinOutput(GPIOC,LED_D,False);
	GPIO_WritePinOutput(GPIOC,LED_E,True);
	GPIO_WritePinOutput(GPIOC,LED_F,True);
	GPIO_WritePinOutput(GPIOC,LED_G,False);
return;
}
void Numero4(void)
{
	GPIO_WritePinOutput(GPIOC,LED_A,True);
	GPIO_WritePinOutput(GPIOC,LED_B,False);
	GPIO_WritePinOutput(GPIOC,LED_C,False);
	GPIO_WritePinOutput(GPIOC,LED_D,True);
	GPIO_WritePinOutput(GPIOC,LED_E,True);
	GPIO_WritePinOutput(GPIOC,LED_F,False);
	GPIO_WritePinOutput(GPIOC,LED_G,False);
return;
}
void Numero5(void)
{
	GPIO_WritePinOutput(GPIOC,LED_A,False);
	GPIO_WritePinOutput(GPIOC,LED_B,True);
	GPIO_WritePinOutput(GPIOC,LED_C,False);
	GPIO_WritePinOutput(GPIOC,LED_D,False);
	GPIO_WritePinOutput(GPIOC,LED_E,True);
	GPIO_WritePinOutput(GPIOC,LED_F,False);
	GPIO_WritePinOutput(GPIOC,LED_G,False);
return;
}
void Numero6(void)
{
	GPIO_WritePinOutput(GPIOC,LED_A,False);
	GPIO_WritePinOutput(GPIOC,LED_B,True);
	GPIO_WritePinOutput(GPIOC,LED_C,False);
	GPIO_WritePinOutput(GPIOC,LED_D,False);
	GPIO_WritePinOutput(GPIOC,LED_E,False);
	GPIO_WritePinOutput(GPIOC,LED_F,False);
	GPIO_WritePinOutput(GPIOC,LED_G,False);
return;
}
void Numero7(void)
{
	GPIO_WritePinOutput(GPIOC,LED_A,False);
	GPIO_WritePinOutput(GPIOC,LED_B,False);
	GPIO_WritePinOutput(GPIOC,LED_C,False);
	GPIO_WritePinOutput(GPIOC,LED_D,True);
	GPIO_WritePinOutput(GPIOC,LED_E,True);
	GPIO_WritePinOutput(GPIOC,LED_F,True);
	GPIO_WritePinOutput(GPIOC,LED_G,True);
return;
}
void Numero8(void)
{
	GPIO_WritePinOutput(GPIOC,LED_A,False);
	GPIO_WritePinOutput(GPIOC,LED_B,False);
	GPIO_WritePinOutput(GPIOC,LED_C,False);
	GPIO_WritePinOutput(GPIOC,LED_D,False);
	GPIO_WritePinOutput(GPIOC,LED_E,False);
	GPIO_WritePinOutput(GPIOC,LED_F,False);
	GPIO_WritePinOutput(GPIOC,LED_G,False);
return;
}
void Numero9(void)
{
	GPIO_WritePinOutput(GPIOC,LED_A,False);
	GPIO_WritePinOutput(GPIOC,LED_B,False);
	GPIO_WritePinOutput(GPIOC,LED_C,False);
	GPIO_WritePinOutput(GPIOC,LED_D,True);
	GPIO_WritePinOutput(GPIOC,LED_E,True);
	GPIO_WritePinOutput(GPIOC,LED_F,False);
	GPIO_WritePinOutput(GPIOC,LED_G,False);
return;
}
