/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define nSLP_Pin GPIO_PIN_1
#define nSLP_GPIO_Port GPIOA
#define IFDBK_Analog_Pin GPIO_PIN_2
#define IFDBK_Analog_GPIO_Port GPIOA
#define nFAULT_Pin GPIO_PIN_3
#define nFAULT_GPIO_Port GPIOA
#define MOTOR_DIRECTION_Pin GPIO_PIN_0
#define MOTOR_DIRECTION_GPIO_Port GPIOB
#define USER_BUTTON_Pin GPIO_PIN_2
#define USER_BUTTON_GPIO_Port GPIOB
#define MOTOR_PWM_Pin GPIO_PIN_10
#define MOTOR_PWM_GPIO_Port GPIOB
#define DRVOFF_Pin GPIO_PIN_11
#define DRVOFF_GPIO_Port GPIOB
#define SW2_CTRL_Pin GPIO_PIN_12
#define SW2_CTRL_GPIO_Port GPIOB
#define BUZZER_PWM_Pin GPIO_PIN_13
#define BUZZER_PWM_GPIO_Port GPIOB
#define SENSE_V_MAIN_Pin GPIO_PIN_14
#define SENSE_V_MAIN_GPIO_Port GPIOB
#define SENSE_TEST_Pin GPIO_PIN_15
#define SENSE_TEST_GPIO_Port GPIOB
#define SENSE_RUN_Pin GPIO_PIN_8
#define SENSE_RUN_GPIO_Port GPIOA
#define STAT_LED_Pin GPIO_PIN_15
#define STAT_LED_GPIO_Port GPIOA
#define SW3_CTRL_Pin GPIO_PIN_8
#define SW3_CTRL_GPIO_Port GPIOB
#define SW1_CTRL_Pin GPIO_PIN_9
#define SW1_CTRL_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
