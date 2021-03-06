/*
 * stm32-template.h
 *
 *  Created on: May 31, 2013
 *      Author: agu
 */

#ifndef STM32_TEMPLATE_H_
#define STM32_TEMPLATE_H_

#include "stm32f10x.h"
#include <stdio.h>
#include "usart/usart.h"
#include "gpio/gpio.h"
#include "tim/tim.h"
#include "nvic/nvic.h"
#include <vector>
#include "stdlib.h"
#include "i2c/i2c.h"

void init();
extern void setup();
extern void loop();
extern void delay(u32 ms);

extern Usart usart;
extern Nvic nvic;

#endif /* STM32_TEMPLATE_H_ */
