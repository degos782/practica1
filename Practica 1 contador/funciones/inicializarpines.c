/*
 * inicializarpines.c
 *
 *  Created on: Feb 13, 2018
 *      Author: Diego Romo C
 */
#include "fsl_clock.h"
#include "fsl_port.h"
#include "stdtypes.h"
#include "inicializar.h"
#include "fsl_gpio.h"
void iniciar(void)
{
//iniciar reloj de puertos
CLOCK_EnableClock(kCLOCK_PortB);
CLOCK_EnableClock(kCLOCK_PortC);
CLOCK_EnableClock(kCLOCK_PortD);
//inicializar pines de entrada
port_pin_config_t ls_BotonEntrada;
ls_BotonEntrada.mux = kPORT_MuxAsGpio;
ls_BotonEntrada.pullSelect = kPORT_PullUp;
PORT_SetPinConfig(PORTB,Incremento_Boton,&ls_BotonEntrada);
PORT_SetPinConfig(PORTB,Decremento_Boton,&ls_BotonEntrada);
PORT_SetPinConfig(PORTB,Reinicio_Boton,&ls_BotonEntrada);
gpio_pin_config_t ls_BotonEntradaConfig;
ls_BotonEntradaConfig.pinDirection = kGPIO_DigitalInput;
GPIO_PinInit(GPIOB,Incremento_Boton,&ls_BotonEntradaConfig);
GPIO_PinInit(GPIOB,Decremento_Boton,&ls_BotonEntradaConfig);
GPIO_PinInit(GPIOB,Reinicio_Boton,&ls_BotonEntradaConfig);
//inicializar pines de salida
port_pin_config_t ls_LEDSalida;
ls_LEDSalida.mux = kPORT_MuxAsGpio;
PORT_SetPinConfig(PORTB,LED_Red,&ls_LEDSalida);
PORT_SetPinConfig(PORTB,LED_Green,&ls_LEDSalida);
PORT_SetPinConfig(PORTD,LED_Blue,&ls_LEDSalida);
PORT_SetPinConfig(PORTC,LED_A,&ls_LEDSalida);
PORT_SetPinConfig(PORTC,LED_B,&ls_LEDSalida);
PORT_SetPinConfig(PORTC,LED_C,&ls_LEDSalida);
PORT_SetPinConfig(PORTC,LED_D,&ls_LEDSalida);
PORT_SetPinConfig(PORTC,LED_E,&ls_LEDSalida);
PORT_SetPinConfig(PORTC,LED_F,&ls_LEDSalida);
PORT_SetPinConfig(PORTC,LED_G,&ls_LEDSalida);
gpio_pin_config_t ls_LEDSalidaConfig,ls_LEDSegmentos;
ls_LEDSalidaConfig.pinDirection = kGPIO_DigitalOutput;
ls_LEDSalidaConfig.outputLogic = True;
ls_LEDSegmentos.pinDirection = kGPIO_DigitalOutput;
ls_LEDSegmentos.outputLogic = False;
GPIO_PinInit(GPIOB,LED_Red,&ls_LEDSalidaConfig);
GPIO_PinInit(GPIOB,LED_Green,&ls_LEDSalidaConfig);
GPIO_PinInit(GPIOD,LED_Blue,&ls_LEDSalidaConfig);
GPIO_PinInit(GPIOC,LED_A,&ls_LEDSegmentos);
GPIO_PinInit(GPIOC,LED_B,&ls_LEDSegmentos);
GPIO_PinInit(GPIOC,LED_C,&ls_LEDSegmentos);
GPIO_PinInit(GPIOC,LED_D,&ls_LEDSegmentos);
GPIO_PinInit(GPIOC,LED_E,&ls_LEDSegmentos);
GPIO_PinInit(GPIOC,LED_F,&ls_LEDSegmentos);
GPIO_PinInit(GPIOC,LED_G,&ls_LEDSegmentos);
return;
}
