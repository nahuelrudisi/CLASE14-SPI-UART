/*
 * queue.c
 *
 *  Created on: 26 de ago. de 2016
 *      Author: LCSR-AF
 */
#include "queue.h"

inline int incrementar(int n) {
	return ++n%16;
}

void queue_init(Queue *q) {
	q->fondo = 0;
	q->frente = 0;
	q->tamanio = 0;
}

int queue_encolar(Queue *q, char d) {
	int err =1;
	if (q->tamanio < 16) {
		q->datos[q->fondo] = d;
		q->fondo = incrementar(q->fondo);
		q->tamanio++;
		err=0;
	}
	return err;
}

char queue_desencolar(Queue *q) {
	char tmp;
	if (q->tamanio > 0) {
		tmp = q->datos[q->frente];
		q->frente = incrementar(q->frente);
		q->tamanio--;
	}
	return tmp;
}
