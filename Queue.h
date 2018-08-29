/**
 * @file Queue.h
 * @author Clay D Park
 * Header file that sets up functions for Queue.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Scheduler.h"
struct Node {
	struct info data;
	struct Node *next;
};