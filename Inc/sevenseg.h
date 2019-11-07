#include "main.h"//nag��wek u�ywa funkcji HALa


#ifndef SEVENSEG_H
#define SEVENSEG_H

//segments

#define SA_ON HAL_GPIO_WritePin(SA_GPIO_Port, SA_Pin, 1)
#define SB_ON HAL_GPIO_WritePin(SB_GPIO_Port, SB_Pin, 1)
#define SC_ON HAL_GPIO_WritePin(SC_GPIO_Port, SC_Pin, 1)
#define SD_ON HAL_GPIO_WritePin(SD_GPIO_Port, SD_Pin, 1)
#define SE_ON HAL_GPIO_WritePin(SE_GPIO_Port, SE_Pin, 1)
#define SF_ON HAL_GPIO_WritePin(SF_GPIO_Port, SF_Pin, 1)
#define SG_ON HAL_GPIO_WritePin(SG_GPIO_Port, SG_Pin, 1)

#define SA_OFF HAL_GPIO_WritePin(SA_GPIO_Port, SA_Pin, 0)
#define SB_OFF HAL_GPIO_WritePin(SB_GPIO_Port, SB_Pin, 0)
#define SC_OFF HAL_GPIO_WritePin(SC_GPIO_Port, SC_Pin, 0)
#define SD_OFF HAL_GPIO_WritePin(SD_GPIO_Port, SD_Pin, 0)
#define SE_OFF HAL_GPIO_WritePin(SE_GPIO_Port, SE_Pin, 0)
#define SF_OFF HAL_GPIO_WritePin(SF_GPIO_Port, SF_Pin, 0)
#define SG_OFF HAL_GPIO_WritePin(SG_GPIO_Port, SG_Pin, 0)

//digits
#define D1_ON HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 0)
#define D2_ON HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 0)
#define D3_ON HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 0)
#define D4_ON HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 0)

#define D1_OFF HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1)
#define D2_OFF HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, 1)
#define D3_OFF HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, 1)
#define D4_OFF HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, 1)

//turning off
#define D_OFF D1_OFF; D2_OFF; D3_OFF; D4_OFF
#define S_OFF SA_OFF; SB_OFF; SC_OFF; SD_OFF; SE_OFF; SF_OFF; SG_OFF
//#define S_OFF SC_OFF; SD_OFF; SE_OFF; SF_OFF; SG_OFF
#define ALL_OFF D_OFF; S_OFF

//display delay
#define WAIT HAL_Delay(1)

//buttons
#define UP HAL_GPIO_ReadPin(UP_GPIO_Port, UP_Pin) == 0
#define LEFT HAL_GPIO_ReadPin(LEFT_GPIO_Port, LEFT_Pin) == 0
#define ENTER HAL_GPIO_ReadPin(ENTER_GPIO_Port, ENTER_Pin) ==0
#define RIGHT HAL_GPIO_ReadPin(RIGHT_GPIO_Port, RIGHT_Pin)==0
#define DOWN HAL_GPIO_ReadPin(DOWN_GPIO_Port, DOWN_Pin)==0
#define BACK HAL_GPIO_ReadPin(BACK_GPIO_Port, BACK_Pin)==0


void display(int position, int number);
void displayTwice(int position, int number);


#endif
