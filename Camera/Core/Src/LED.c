/*
 * LED.c
 *
 *  Created on: Sep 15, 2020
 *      Author: Faizal
 */
#include "LED.h"

// Function declaration
void LED_Init(void){
	GPIO_InitTypeDef GPIO_InitStruct = {0};

		/*Configure GPIO pin : Green LED */
		GPIO_InitStruct.Pin = GREEN_LED_GPIO_PIN;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		HAL_GPIO_Init(GREEN_LED_GPIO_PORT, &GPIO_InitStruct);

		/*Configure GPIO pin : Blue LED */
		GPIO_InitStruct.Pin = BLUE_LED_GPIO_PIN;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		HAL_GPIO_Init(BLUE_LED_GPIO_PORT, &GPIO_InitStruct);

		/*Configure GPIO pin : Red LED */
		GPIO_InitStruct.Pin = RED_LED_GPIO_PIN;
		GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
		GPIO_InitStruct.Pull = GPIO_NOPULL;
		HAL_GPIO_Init(RED_LED_GPIO_PORT, &GPIO_InitStruct);
}

void toggle_LED(LED_Defines LED){
	if (LED == RED_LED){
		HAL_GPIO_TogglePin(RED_LED_GPIO_PORT,RED_LED_GPIO_PIN);
	}
	if (LED == BLUE_LED){
			HAL_GPIO_TogglePin(BLUE_LED_GPIO_PORT,BLUE_LED_GPIO_PIN);
		}
	if (LED == GREEN_LED){
			HAL_GPIO_TogglePin(GREEN_LED_GPIO_PORT,GREEN_LED_GPIO_PIN);
		}
}

void on_LED(LED_Defines LED){
	if (LED == RED_LED){
		HAL_GPIO_WritePin(RED_LED_GPIO_PORT , RED_LED_GPIO_PIN, 1);
	}
	if (LED == BLUE_LED){
		HAL_GPIO_WritePin(BLUE_LED_GPIO_PORT , BLUE_LED_GPIO_PIN, 1);
		}
	if (LED == GREEN_LED){
		HAL_GPIO_WritePin(GREEN_LED_GPIO_PORT , GREEN_LED_GPIO_PIN, 1);
		}
}

void off_LED(LED_Defines LED){
	if (LED == RED_LED){
		HAL_GPIO_WritePin(RED_LED_GPIO_PORT , RED_LED_GPIO_PIN, 0);
	}
	if (LED == BLUE_LED){
		HAL_GPIO_WritePin(BLUE_LED_GPIO_PORT , BLUE_LED_GPIO_PIN, 0);
		}
	if (LED == GREEN_LED){
		HAL_GPIO_WritePin(GREEN_LED_GPIO_PORT , GREEN_LED_GPIO_PIN, 0);
		}
}
