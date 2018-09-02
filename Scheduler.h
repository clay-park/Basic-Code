#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct info {
	char *index;
    int arrival;
    int priority;
    int age;
    int cpuTime;
    int runs;
};


#endif