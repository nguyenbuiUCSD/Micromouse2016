#ifndef LED_H
#define LED_H

#include "stm32f4xx.h"
#include "mxconstants.h"

#define LED1_ON    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
#define LED1_OFF   HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
#define LED2_ON    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
#define LED2_OFF   HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
#define LED3_ON    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);
#define LED3_OFF   HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
#define LED4_ON    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);
#define LED4_OFF   HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);
#define LED5_ON    HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, GPIO_PIN_RESET);
#define LED5_OFF   HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, GPIO_PIN_SET);
#define LED6_ON    HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, GPIO_PIN_RESET);
#define LED6_OFF   HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, GPIO_PIN_SET);


#define ALL_LED_OFF LED1_OFF; \
                    LED2_OFF; \
                    LED3_OFF; \
					LED4_OFF; \
					LED5_OFF; \
					LED6_OFF; \


#define ALL_LED_ON  LED1_ON; \
                    LED2_ON; \
					LED3_ON; \
					LED4_ON; \
					LED5_ON; \
					LED6_ON; \


void led_init();

#endif /* LED_H */
