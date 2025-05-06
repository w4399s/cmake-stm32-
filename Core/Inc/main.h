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
#include "stm32f4xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ext_up_Pin GPIO_PIN_7
#define ext_up_GPIO_Port GPIOI
#define ext_up_EXTI_IRQn EXTI9_5_IRQn
#define up_ball_Pin GPIO_PIN_6
#define up_ball_GPIO_Port GPIOI
#define in_ball_Pin GPIO_PIN_6
#define in_ball_GPIO_Port GPIOC
#define IMU_HEAT_PWM_Pin GPIO_PIN_6
#define IMU_HEAT_PWM_GPIO_Port GPIOF
#define LED_R_Pin GPIO_PIN_12
#define LED_R_GPIO_Port GPIOH
#define LED_G_Pin GPIO_PIN_11
#define LED_G_GPIO_Port GPIOH
#define LED_B_Pin GPIO_PIN_10
#define LED_B_GPIO_Port GPIOH
#define Buzzer_Pin GPIO_PIN_14
#define Buzzer_GPIO_Port GPIOD
#define KEY_Pin GPIO_PIN_0
#define KEY_GPIO_Port GPIOA
#define KEY_EXTI_IRQn EXTI0_IRQn
#define ACCL_CS_Pin GPIO_PIN_4
#define ACCL_CS_GPIO_Port GPIOA
#define ACCL_INT_Pin GPIO_PIN_4
#define ACCL_INT_GPIO_Port GPIOC
#define ACCL_INT_EXTI_IRQn EXTI4_IRQn
#define PAW_Pin GPIO_PIN_13
#define PAW_GPIO_Port GPIOE
#define GYRO_INT_Pin GPIO_PIN_5
#define GYRO_INT_GPIO_Port GPIOC
#define GYRO_INT_EXTI_IRQn EXTI9_5_IRQn
#define STOP_Pin GPIO_PIN_9
#define STOP_GPIO_Port GPIOE
#define CLOSE_Pin GPIO_PIN_11
#define CLOSE_GPIO_Port GPIOE
#define DOWN_Pin GPIO_PIN_14
#define DOWN_GPIO_Port GPIOE
#define GYRO_CS_Pin GPIO_PIN_0
#define GYRO_CS_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
