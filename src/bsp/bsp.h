/*
 * bsp.h
 *
 *  Created on: 26 de ago. de 2016
 *      Author: Matias Labedz
 */

#ifndef BSP_BSP_H_
#define BSP_BSP_H_

#include "stm32f4xx.h"

void BSP_Init(void);

void BSP_UART_Init(void);
void BSP_RCC_Init(void);

void TransmitData(uint8_t *buffer, uint8_t size);

#endif /* BSP_BSP_H_ */
