/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/

#include "bsp/bsp.h"
#include "queue.h"

enum{
	X=0,
	Y,
	Z
}axis;


int main(void)
{
	int16_t XYZ[3];
	int8_t error=0, i=0;
	Queue estructura;
	int16_t dato[16];

	BSP_Init();
	BSP_RCC_Init();
	BSP_UART_Init();
	BSP_ACCELERO_Init();
	queue_init(&estructura);

	while(1)
	{
		BSP_ACCELERO_GetXYZ(XYZ[0]);
//		BSP_ACCELERO_GetXYZ(XYZ[1]);
//		BSP_ACCELERO_GetXYZ(XYZ[2]);
		error = queue_encolar(&estructura,XYZ[0]);		// 0 no hay error, 1 el buffer se lleno
		if(error == 1)		// Si el buffer se lleno
		{
			dato[i++] = queue_desencolar(&estructura);
			if(i >= 16)
			{
				i=0;
				error=0;
			}
		}

	}
}
