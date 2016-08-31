/*
 * queue.h
 *
 *  Created on: 26 de ago. de 2016
 *      Author: LCSR-AF
 */

#ifndef QUEUE_H_
#define QUEUE_H_


typedef struct {
	int frente;
	int fondo;
	int tamanio;
	char datos[16];
} Queue;


void queue_init(Queue *q);
int queue_encolar(Queue *q, char d);
char queue_desencolar(Queue *q);
int incrementar(int n);

#endif /* QUEUE_H_ */
