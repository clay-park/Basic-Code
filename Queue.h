#ifndef QUEUE_H
#define QUEUE_H

/**
 * @file Queue.h
 * @author Clay D Park
 * Header file that sets up functions for Queue.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Scheduler.h"
typedef struct Node{
	struct info data;
	struct Node *next;
}Node;

struct LinkedQueue {
	Node *front;
	Node *back;
	unsigned int size;
};

void CreateQueue(struct LinkedQueue *q);

struct info getFrontInfo(struct LinkedQueue *q);

void removeLinked(struct LinkedQueue *q);

void addToBack(struct LinkedQueue *q, struct info a);

int isEmpty(struct LinkedQueue *q);

void setPriority(struct LinkedQueue *q,int priority);

void setTimesRun(struct LinkedQueue *q,int timesRun);

void setQuantums(struct LinkedQueue *q,int quantums);

void setTotalQuantums(struct LinkedQueue *q,int totalQuantums);

void setReady(struct LinkedQueue *q,int readyTime);

void setRuns(struct LinkedQueue *q,int runs);

#endif