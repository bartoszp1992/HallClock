/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f0xx_hal.h"

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
#define D1_Pin GPIO_PIN_0
#define D1_GPIO_Port GPIOA
#define D2_Pin GPIO_PIN_1
#define D2_GPIO_Port GPIOA
#define D3_Pin GPIO_PIN_2
#define D3_GPIO_Port GPIOA
#define D4_Pin GPIO_PIN_3
#define D4_GPIO_Port GPIOA
#define SE_Pin GPIO_PIN_5
#define SE_GPIO_Port GPIOA
#define SD_Pin GPIO_PIN_6
#define SD_GPIO_Port GPIOA
#define SC_Pin GPIO_PIN_7
#define SC_GPIO_Port GPIOA
#define SP_Pin GPIO_PIN_0
#define SP_GPIO_Port GPIOB
#define BELL_Pin GPIO_PIN_1
#define BELL_GPIO_Port GPIOB
#define BACK_Pin GPIO_PIN_9
#define BACK_GPIO_Port GPIOA
#define ENTER_Pin GPIO_PIN_10
#define ENTER_GPIO_Port GPIOA
#define DOWN_Pin GPIO_PIN_11
#define DOWN_GPIO_Port GPIOA
#define RIGHT_Pin GPIO_PIN_12
#define RIGHT_GPIO_Port GPIOA
#define LEFT_Pin GPIO_PIN_13
#define LEFT_GPIO_Port GPIOA
#define UP_Pin GPIO_PIN_14
#define UP_GPIO_Port GPIOA
#define SB_Pin GPIO_PIN_15
#define SB_GPIO_Port GPIOA
#define SA_Pin GPIO_PIN_3
#define SA_GPIO_Port GPIOB
#define SF_Pin GPIO_PIN_4
#define SF_GPIO_Port GPIOB
#define SG_Pin GPIO_PIN_5
#define SG_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
