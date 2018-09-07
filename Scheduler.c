#include "Scheduler.h"
#include "Queue.h"

void incrementQueue(struct LinkedQueue *q1, struct LinkedQueue *q2, struct LinkedQueue *q3, struct LinkedQueue *q4, int currentQueue) {
    if (currentQueue == 1) {
        if (isEmpty(q2) != 0) {
            int tempInt = getFrontInfo(q2).indexNumber;
            struct info temp = getFrontInfo(q2);
            removeLinked(q2);
            temp.runs++;
            addToBack(q2, temp);
            while (getFrontInfo(q2).indexNumber != tempInt) {
                temp = getFrontInfo(q2);
                temp.runs++;
                if (temp.runs == 7) {
                    removeLinked(q2);
                    temp.runs = 0;
                    temp.priority++;
                    addToBack(q1, temp);
                } else {
                    removeLinked(q2);
                    addToBack(q2, temp);
                }
            }
        }
        if (isEmpty(q3) != 0) {
            int tempInt = getFrontInfo(q3).indexNumber;
            struct info temp = getFrontInfo(q3);
            removeLinked(q3);
            temp.runs++;
            addToBack(q3, temp);
            while (getFrontInfo(q3).indexNumber != tempInt) {
                temp = getFrontInfo(q3);
                temp.runs++;
                if (temp.runs == 7) {
                    removeLinked(q3);
                    temp.priority++;
                    if (temp.priority == 5) {
                        addToBack(q2, temp);
                    } else {
                        addToBack(q3, temp);
                    }
                } else {
                    removeLinked(q3);
                    addToBack(q3, temp);
                }
            }
        }
        if (isEmpty(q4) != 0) {
            int tempInt = getFrontInfo(q4).indexNumber;
            struct info temp = getFrontInfo(q4);
            removeLinked(q4);
            temp.runs++;
            addToBack(q4, temp);
            while (getFrontInfo(q4).indexNumber != tempInt) {
                temp = getFrontInfo(q4);
                temp.runs++;
                if (temp.runs == 7) {
                    removeLinked(q4);
                    temp.priority++;
                    if (temp.priority == 3) {
                        addToBack(q3, temp);
                    } else {
                        addToBack(q4, temp);
                    }
                } else {
                    removeLinked(q4);
                    addToBack(q4, temp);
                }
            }
        }
    } else if (currentQueue == 2) {
        if (isEmpty(q2) != 0) {
            int tempInt = getFrontInfo(q2).indexNumber;
            struct info temp = getFrontInfo(q2);
            removeLinked(q2);
            addToBack(q2, temp);
            while (getFrontInfo(q2).indexNumber != tempInt) {
                temp = getFrontInfo(q2);
                temp.runs++;
                if (temp.runs == 7) {
                    removeLinked(q2);
                    temp.runs = 0;
                    temp.priority++;
                    addToBack(q1, temp);
                } else {
                    removeLinked(q2);
                    addToBack(q2, temp);
                }
            }
        }
        if (isEmpty(q3) != 0) {
            int tempInt = getFrontInfo(q3).indexNumber;
            struct info temp = getFrontInfo(q3);
            removeLinked(q3);
            temp.runs++;
            addToBack(q3, temp);
            while (getFrontInfo(q3).indexNumber != tempInt) {
                temp = getFrontInfo(q3);
                temp.runs++;
                if (temp.runs == 7) {
                    removeLinked(q3);
                    temp.priority++;
                    if (temp.priority == 5) {
                        addToBack(q2, temp);
                    } else {
                        addToBack(q3, temp);
                    }
                } else {
                    removeLinked(q3);
                    addToBack(q3, temp);
                }
            }
        }
        if (isEmpty(q4) != 0) {
            int tempInt = getFrontInfo(q4).indexNumber;
            struct info temp = getFrontInfo(q4);
            removeLinked(q4);
            temp.runs++;
            addToBack(q4, temp);
            while (getFrontInfo(q4).indexNumber != tempInt) {
                temp = getFrontInfo(q4);
                temp.runs++;
                if (temp.runs == 7) {
                    removeLinked(q4);
                    temp.priority++;
                    if (temp.priority == 3) {
                        addToBack(q3, temp);
                    } else {
                        addToBack(q4, temp);
                    }
                } else {
                    removeLinked(q4);
                    addToBack(q4, temp);
                }
            }
        }
    } else if (currentQueue == 3) {
        if (isEmpty(q3) != 0) {
            int tempInt = getFrontInfo(q3).indexNumber;
            struct info temp = getFrontInfo(q3);
            removeLinked(q3);
            addToBack(q3, temp);
            while (getFrontInfo(q3).indexNumber != tempInt) {
                temp = getFrontInfo(q3);
                temp.runs++;
                if (temp.runs == 7) {
                    removeLinked(q3);
                    temp.priority++;
                    if (temp.priority == 5) {
                        addToBack(q2, temp);
                    } else {
                        addToBack(q3, temp);
                    }
                } else {
                    removeLinked(q3);
                    addToBack(q3, temp);
                }
            }
        }
        if (isEmpty(q4) != 0) {
            int tempInt = getFrontInfo(q4).indexNumber;
            struct info temp = getFrontInfo(q4);
            removeLinked(q4);
            temp.runs++;
            addToBack(q4, temp);
            while (getFrontInfo(q4).indexNumber != tempInt) {
                temp = getFrontInfo(q4);
                temp.runs++;
                if (temp.runs == 7) {
                    removeLinked(q4);
                    temp.priority++;
                    if (temp.priority == 3) {
                        addToBack(q3, temp);
                    } else {
                        addToBack(q4, temp);
                    }
                } else {
                    removeLinked(q4);
                    addToBack(q4, temp);
                }
            }
        }
    } else if (currentQueue == 4) {
        int tempInt = getFrontInfo(q4).indexNumber;
        struct info temp = getFrontInfo(q4);
        removeLinked(q4);
        addToBack(q4, temp);
        while (getFrontInfo(q4).indexNumber != tempInt) {
            temp = getFrontInfo(q4);
            temp.runs++;
            if (temp.runs == 7) {
                removeLinked(q4);
                temp.priority++;
                if (temp.priority == 3) {
                    addToBack(q3, temp);
                } else {
                    addToBack(q4, temp);
                }
            } else {
                removeLinked(q4);
                addToBack(q4, temp);
            }
        }
    }

}

int main() {
    int i = 0;
    struct LinkedQueue *q1 = (struct LinkedQueue *) malloc(sizeof (struct LinkedQueue));
    struct LinkedQueue *q2 = (struct LinkedQueue *) malloc(sizeof (struct LinkedQueue));
    struct LinkedQueue *q3 = (struct LinkedQueue *) malloc(sizeof (struct LinkedQueue));
    struct LinkedQueue *q4 = (struct LinkedQueue *) malloc(sizeof (struct LinkedQueue));
    CreateQueue(q1);
    CreateQueue(q2);
    CreateQueue(q3);
    CreateQueue(q4);
    int amount = 0;
    int capacity = 10;
    int p = 0;
    struct info *everything = (struct info *) malloc(10 * sizeof (struct info));
    char fileName[100];
    char index;
    int indexNumber;
    int arrival;
    int priority;
    int age;
    int cpuTime;
    scanf("%s", fileName);
    FILE *fp = fopen(fileName, "r");
    while (!feof(fp)) {
        fscanf(fp, "%c%d %d %d %d %d%*[\n]", &index, &indexNumber, &arrival, &priority, &age, &cpuTime);
        everything[amount].index = index;
        everything[amount].indexNumber = indexNumber;
        everything[amount].arrival = arrival;
        everything[amount].priority = priority;
        everything[amount].age = age;
        everything[amount].cpuTime = cpuTime;
        everything[amount].runs = 0;
        everything[amount].quantums = 0;
        everything[amount].totalQuantums = 0;
        everything[amount].timesRun = 0;
        everything[amount].ready = 0;

        // printf("%c%d %d %d %d %d\n",everything[amount].index,everything[amount].indexNumber,everything[amount].arrival,everything[amount].priority,everything[amount].age,everything[amount].cpuTime);
        amount++;
        if (amount == capacity - 1) {
            capacity = capacity * 2;
            everything = realloc(everything, capacity * sizeof (struct info));
        }
    }
    // addToBack(q1,everything[0]);
    // addToBack(q1,everything[1]);
    // printf("%c%d %d %d %d %d\n",getFrontInfo(q1).index,getFrontInfo(q1).indexNumber,getFrontInfo(q1).arrival,getFrontInfo(q1).priority,getFrontInfo(q1).age,getFrontInfo(q1).cpuTime);
    // removeLinked(q1);
    // printf("%c%d %d %d %d %d\n",getFrontInfo(q1).index,getFrontInfo(q1).indexNumber,getFrontInfo(q1).arrival,getFrontInfo(q1).priority,getFrontInfo(q1).age,getFrontInfo(q1).cpuTime);
    printf("Index Priority   Arrival    End   Ready CPU_Time   Waiting\n");
    while (isEmpty(q1) != 0 || isEmpty(q2) != 0 || isEmpty(q3) != 0 || isEmpty(q4) != 0 || p < 6) {
        // while(i<114){
        // printf("\n\n%d\n\n", i);
        for (int j = 0; j < amount; j++) {
            if (everything[j].priority == 6 && everything[j].arrival == i) {
                addToBack(q1, everything[j]);
                p++;
            } else if (everything[j].priority == 5 && everything[j].arrival == i) {
                addToBack(q2, everything[j]);
                p++;
            } else if (everything[j].priority == 4 && everything[j].arrival == i) {
                addToBack(q3, everything[j]);
                p++;
            } else if (everything[j].priority == 3 && everything[j].arrival == i) {
                addToBack(q3, everything[j]);
                p++;
            } else if (everything[amount].priority == 2 && everything[j].arrival == i) {
                addToBack(q4, everything[j]);
                p++;
            } else if (everything[amount].priority == 1 && everything[j].arrival == i) {
                addToBack(q4, everything[j]);
                p++;
            }
        }
        if (isEmpty(q1) == 1) {
            //TODO ADD CHECKS FOR PREMTION
            if (isEmpty(q3) == 1 && isEmpty(q4) == 1) {
                if (getFrontInfo(q3).quantums != 0) {
                    setQuantums(q3, 0);
                    setRuns(q3, 0);
                    incrementQueue(q1, q2, q3, q4, 3);
                } else if (getFrontInfo(q4).quantums != 0) {
                    setQuantums(q4, 0);
                    setRuns(q4, 0);
                    incrementQueue(q1, q2, q3, q4, 4);
                }
            }
            setTimesRun(q1, getFrontInfo(q1).timesRun + 1);
            while (getFrontInfo(q1).cpuTime != getFrontInfo(q1).totalQuantums && getFrontInfo(q1).quantums != 5) {
                if (getFrontInfo(q1).ready != 0) {
                    setReady(q1, i);
                }
                setTotalQuantums(q1, getFrontInfo(q1).totalQuantums + 1);
                setQuantums(q1, getFrontInfo(q1).quantums + 1);
                i++;
                for (int j = 0; j < amount; j++) {
                    if (everything[j].priority == 6 && everything[j].arrival == i) {
                        addToBack(q1, everything[j]);
                        p++;
                    } else if (everything[j].priority == 5 && everything[j].arrival == i) {
                        addToBack(q2, everything[j]);
                        p++;
                    } else if (everything[j].priority == 4 && everything[j].arrival == i) {
                        addToBack(q3, everything[j]);
                        p++;
                    } else if (everything[j].priority == 3 && everything[j].arrival == i) {
                        addToBack(q3, everything[j]);
                        p++;
                    } else if (everything[amount].priority == 2 && everything[j].arrival == i) {
                        addToBack(q4, everything[j]);
                        p++;
                    } else if (everything[amount].priority == 1 && everything[j].arrival == i) {
                        addToBack(q4, everything[j]);
                        p++;
                    }
                }
            }
            setQuantums(q1, 0);
            setRuns(q1, 0);
            if (getFrontInfo(q1).cpuTime == getFrontInfo(q1).totalQuantums) {
                incrementQueue(q1, q2, q3, q4, 1);
                struct info temp = getFrontInfo(q1);
                removeLinked(q1);
                printf("%c%d %d %d %d %d %d %d\n", temp.index, temp.indexNumber, temp.priority, temp.arrival, i, temp.ready, temp.cpuTime, (i - (temp.ready + temp.cpuTime)));
            } else if (getFrontInfo(q1).timesRun == 5) {
                incrementQueue(q1, q2, q3, q4, 1);
                setTimesRun(q1, 0);
                setPriority(q1, getFrontInfo(q1).priority - 1);
                struct info temp = getFrontInfo(q1);
                removeLinked(q1);
                addToBack(q2, temp);
                //TODO ADD INCREMENT QUEUE
            } else {
                incrementQueue(q1, q2, q3, q4, 1);
                struct info temp = getFrontInfo(q1);
                removeLinked(q1);
                addToBack(q1, temp);
            }

        } else if (isEmpty(q2) == 1) {
            if (isEmpty(q3) == 1 && isEmpty(q4) == 1) {
                if (getFrontInfo(q3).quantums != 0) {
                    setQuantums(q3, 0);
                    setRuns(q3, 0);
                    incrementQueue(q1, q2, q3, q4, 3);
                } else if (getFrontInfo(q4).quantums != 0) {
                    setQuantums(q4, 0);
                    setRuns(q4, 0);
                    incrementQueue(q1, q2, q3, q4, 4);
                }
            }
            setTimesRun(q2, getFrontInfo(q2).timesRun + 1);
            while (getFrontInfo(q2).cpuTime != getFrontInfo(q2).totalQuantums && getFrontInfo(q2).quantums != 5) {
                if (getFrontInfo(q2).ready != 0) {
                    setReady(q2, i);
                }
                setTotalQuantums(q2, getFrontInfo(q2).totalQuantums + 1);
                setQuantums(q2, getFrontInfo(q2).quantums + 1);
                i++;
                for (int j = 0; j < amount; j++) {
                    if (everything[j].priority == 6 && everything[j].arrival == i) {
                        addToBack(q1, everything[j]);
                        p++;
                    } else if (everything[j].priority == 5 && everything[j].arrival == i) {
                        addToBack(q2, everything[j]);
                        p++;
                    } else if (everything[j].priority == 4 && everything[j].arrival == i) {
                        addToBack(q3, everything[j]);
                        p++;
                    } else if (everything[j].priority == 3 && everything[j].arrival == i) {
                        addToBack(q3, everything[j]);
                        p++;
                    } else if (everything[amount].priority == 2 && everything[j].arrival == i) {
                        addToBack(q4, everything[j]);
                        p++;
                    } else if (everything[amount].priority == 1 && everything[j].arrival == i) {
                        addToBack(q4, everything[j]);
                        p++;
                    }
                }
            }
            setQuantums(q2, 0);
            setRuns(q2, 0);
            if (getFrontInfo(q2).cpuTime == getFrontInfo(q2).totalQuantums) {
                incrementQueue(q1, q2, q3, q4, 2);
                struct info temp = getFrontInfo(q2);
                removeLinked(q2);
                printf("%c%d %d %d %d %d %d %d\n", temp.index, temp.indexNumber, temp.priority, temp.arrival, i, temp.ready, temp.cpuTime, (i - (temp.ready + temp.cpuTime)));
            } else if (getFrontInfo(q2).timesRun == 5) {
                incrementQueue(q1, q2, q3, q4, 2);
                setTimesRun(q2, 0);
                setPriority(q2, getFrontInfo(q2).priority - 1);
                struct info temp = getFrontInfo(q2);
                removeLinked(q2);
                addToBack(q3, temp);
            } else {
                incrementQueue(q1, q2, q3, q4, 2);
                struct info temp = getFrontInfo(q2);
                removeLinked(q2);
                addToBack(q2, temp);
            }

        } else if (isEmpty(q3) == 1) {
            if (isEmpty(q4) == 1) {
                if (getFrontInfo(q4).quantums != 0) {
                    setQuantums(q4, 0);
                    setRuns(q4, 0);
                    incrementQueue(q1, q2, q3, q4, 4);
                }
            }
            //TODO FIX HERE
            if (getFrontInfo(q3).quantums == 10) {
                setTimesRun(q3, getFrontInfo(q3).timesRun + 1);
            }
            if (getFrontInfo(q3).cpuTime != getFrontInfo(q3).totalQuantums && getFrontInfo(q3).quantums != 10) {
                if (getFrontInfo(q3).ready != 0) {
                    setReady(q3, i);
                }
                setTotalQuantums(q3, getFrontInfo(q3).totalQuantums + 1);
                setQuantums(q3, getFrontInfo(q3).quantums + 1);
            } else {
                if (getFrontInfo(q3).cpuTime == getFrontInfo(q3).totalQuantums) {
                    incrementQueue(q1, q2, q3, q4, 3);
                    struct info temp = getFrontInfo(q3);
                    removeLinked(q3);
                    printf("%c%d %d %d %d %d %d %d\n", temp.index, temp.indexNumber, temp.priority, temp.arrival, i, temp.ready, temp.cpuTime, (i - (temp.ready + temp.cpuTime)));
                } else if (getFrontInfo(q3).timesRun == 2) {
                    incrementQueue(q1, q2, q3, q4, 3);
                    setTimesRun(q3, 0);
                    setPriority(q3, getFrontInfo(q3).priority - 1);
                    struct info temp = getFrontInfo(q3);
                    removeLinked(q3);
                    addToBack(q4, temp);
                } else {                 
                    incrementQueue(q1, q2, q3, q4, 3);
                    struct info temp = getFrontInfo(q3);
                    removeLinked(q3);
                    addToBack(q3, temp);
                }
            }
            i++;
        } else if(isEmpty(q4) == 1){
            if (getFrontInfo(q4).runs == 0) {
                setTimesRun(q4, getFrontInfo(q4).timesRun + 1);
            }
            if (getFrontInfo(q4).cpuTime != getFrontInfo(q4).totalQuantums && getFrontInfo(q4).quantums != 20) {
                if (getFrontInfo(q4).ready != 0) {
                    setReady(q4, i);
                }
                setTotalQuantums(q4, getFrontInfo(q4).totalQuantums + 1);
                setQuantums(q4, getFrontInfo(q4).quantums + 1);
            } else {
                if (getFrontInfo(q4).cpuTime == getFrontInfo(q4).totalQuantums) {
                    incrementQueue(q1, q2, q3, q4, 4);
                    struct info temp = getFrontInfo(q4);
                    removeLinked(q4);
                    printf("%c%d %d %d %d %d %d %d\n", temp.index, temp.indexNumber, temp.priority, temp.arrival, i, temp.ready, temp.cpuTime, (i - (temp.ready + temp.cpuTime)));
                } else {
                    incrementQueue(q1, q2, q3, q4, 4);
                    struct info temp = getFrontInfo(q4);
                    removeLinked(q4);
                    addToBack(q4, temp);
                }
            }
            i++;
        }


    }
    free(everything);
    free(q1);
    free(q2);
    free(q3);
    free(q4);
}



