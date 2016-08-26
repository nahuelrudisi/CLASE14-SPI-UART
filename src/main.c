/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/



#include "stm32f4_discovery.h"
#include "stm32f4_discovery_accelerometer.h"

enum{
	X=0,
	Y,
	Z
}axis;


int main(void)
{
	int16_t XYZ[3];

	BSP_ACCELERO_Init();

	while(1){
		BSP_ACCELERO_GetXYZ(XYZ);

	}
}
