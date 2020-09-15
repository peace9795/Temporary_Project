/*
 * LED.h
 *
 *  Created on: Sep 15, 2020
 *      Author: Faizal
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "stm32f7xx_hal.h"


typedef enum
{
  RED_LED = 0,
  BLUE_LED,
  GREEN_LED
}LED_Defines;


// Functions defines
void LED_Init(void);
void toggle_LED(uint8_t LED);
void on_LED(LED_Defines LED);
void off_LED(LED_Defines LED);

// end function defines


// LED port defines for Green, Red and Blue
#define GREEN_LED_GPIO_PORT GPIOB
#define GREEN_LED_GPIO_PIN GPIO_PIN_0

#define BLUE_LED_GPIO_PORT GPIOB
#define BLUE_LED_GPIO_PIN GPIO_PIN_7

#define RED_LED_GPIO_PORT GPIOB
#define RED_LED_GPIO_PIN GPIO_PIN_14

// end defines






#endif /* INC_LED_H_ */
