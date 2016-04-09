//
// This file is part of the GNU ARM Eclipse distribution.
// Copyright (c) 2014 Liviu Ionescu.
//

#include "Led.h"
#include "mxconstants.h"

// ----------------------------------------------------------------------------

void
led_init()
{
	  GPIO_InitTypeDef GPIO_InitStruct;

	  /* GPIO Ports Clock Enable */
	  __GPIOC_CLK_ENABLE();
	  __GPIOB_CLK_ENABLE();

	  /*Configure GPIO pins : PB10 PB11 LED1_Pin LED2_Pin
	                           LED3_Pin LED4_Pin PB4 */
	  GPIO_InitStruct.Pin = LED1_Pin|LED2_Pin|LED3_Pin|LED4_Pin|GPIO_PIN_4;
	  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	  GPIO_InitStruct.Pull = GPIO_NOPULL;
	  GPIO_InitStruct.Speed = GPIO_SPEED_LOW;
	  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

	  /*Configure GPIO pins : LED5_Pin LED6_Pin */
	  GPIO_InitStruct.Pin = LED5_Pin|LED6_Pin;
	  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	  GPIO_InitStruct.Pull = GPIO_NOPULL;
	  GPIO_InitStruct.Speed = GPIO_SPEED_LOW;
	  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

	  /*Configure GPIO pin Output Level */
	  HAL_GPIO_WritePin(GPIOB, LED1_Pin|LED2_Pin
	                          |LED3_Pin|LED4_Pin, GPIO_PIN_SET);

	  /*Configure GPIO pin Output Level */
	  HAL_GPIO_WritePin(GPIOC, LED5_Pin|LED6_Pin, GPIO_PIN_SET);
}

// ----------------------------------------------------------------------------
