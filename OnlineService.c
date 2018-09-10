/**
 * OnlineService Program
 * @author Clay Park(1759080), Cameron Youngblood(a1758818)
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct info;
typedef struct info {
	char index;
    int indexNumber;
    int arrival;
    int priority;
    int age;
    int cpuTime;
    int runs;
    int quantums;
    int totalQuantums;
    int timesRun;
    int ready;
}info;


typedef struct Node{
	struct info data;
	struct Node *next;
}Node;

struct LinkedQueue {
	Node *front;
	Node *back;
	unsigned int size;
};
void CreateQueue(struct LinkedQueue *q){
    q->front = NULL;
    q->back = NULL;
    q->size = 0;
}
struct info getFrontInfo(struct LinkedQueue *q){
return q-> front ->data;
}

void removeLinked(struct LinkedQueue *q){
Node *temp = q->front;
q->front = q->front->next;
q->size--;
free(temp);

}

void addToBack(struct LinkedQueue *q, struct info a){
    if(q->front == NULL){
        // printf("%c%d %d %d %d %d\n",a.index,a.indexNumber,a.arrival,a.priority,a.age,a.cpuTime);
        q->front = (Node *) malloc(sizeof(Node));
        q->front->data = a;
        q->front->next = NULL;
        q->back = q->front;
    } else {
        q->back->next =(Node *) malloc(sizeof(Node));
        q->back->next->data = a;
        q->back->next->next = NULL;
        q->back = q->back->next;
    }


    q->size++;
}
int isEmpty(struct LinkedQueue *q){
if(q->size == 0){
    return 0;
} else{
return 1;
} 
}
int size(struct LinkedQueue *q){
    return q->size;
}



    void setPriority(struct LinkedQueue *q,int priority){
        q-> front ->data.priority = priority;
    }

    void setTimesRun(struct LinkedQueue *q,int timesRun){
        q->front->data.timesRun = timesRun;
    }
    void setQuantums(struct LinkedQueue *q,int quantums){
        q->front->data.quantums = quantums;
    }
    void setTotalQuantums(struct LinkedQueue *q,int totalQuantums){
        q->front->data.totalQuantums = totalQuantums;
    }
    void setReady(struct LinkedQueue *q,int readyTime){
        q->front->data.ready = readyTime;
    }
    void setRuns(struct LinkedQueue *q,int runs){
        q->front->data.runs = runs;
    }
    void debugHelper(struct LinkedQueue *q1, struct LinkedQueue *q2, struct LinkedQueue *q3, struct LinkedQueue *q4,int i){
        printf("LastMoment of %d\n", i);
        printf("Q1: ");
        if (isEmpty(q1) != 0){
                    int tempInt = getFrontInfo(q1).indexNumber;
            struct info temp = getFrontInfo(q1);
            printf("%d ",getFrontInfo(q1).indexNumber);
            removeLinked(q1);
            addToBack(q1, temp);
            while (getFrontInfo(q1).indexNumber != tempInt) {
                    printf("%d ",getFrontInfo(q1).indexNumber);
                    temp = getFrontInfo(q1);
                    removeLinked(q1);
                    addToBack(q1, temp);
            }
        }
        printf("\nQ2: ");
                if (isEmpty(q2) != 0){
                    int tempInt = getFrontInfo(q2).indexNumber;
            struct info temp = getFrontInfo(q2);
            printf("%d ",getFrontInfo(q2).indexNumber);
            removeLinked(q2);
            addToBack(q2, temp);
            while (getFrontInfo(q2).indexNumber != tempInt) {
                    printf("%d ",getFrontInfo(q2).indexNumber);
                    temp = getFrontInfo(q2);
                    removeLinked(q2);
                    addToBack(q2, temp);
            }
        }
        printf("\n");
        printf("Q3: ");
                if (isEmpty(q3) != 0){
            int tempInt = getFrontInfo(q3).indexNumber;
            struct info temp = getFrontInfo(q3);
            printf("%d ",getFrontInfo(q3).indexNumber);
            removeLinked(q3);
            addToBack(q3, temp);
            // printf("h %d %d h",tempInt, getFrontInfo(q3).indexNumber);
            while (getFrontInfo(q3).indexNumber != tempInt) {
                    printf("%d ",getFrontInfo(q3).indexNumber);
                    temp = getFrontInfo(q3);
                    removeLinked(q3);
                    addToBack(q3, temp);
            }
        }
        printf("\n");
        printf("Q4: ");
                if (isEmpty(q4) != 0){
                    int tempInt = getFrontInfo(q4).indexNumber;
            struct info temp = getFrontInfo(q4);
            printf("%d ",getFrontInfo(q4).indexNumber);
            removeLinked(q4);
            addToBack(q4, temp);
            while (getFrontInfo(q4).indexNumber != tempInt) {
                    printf("%d ",getFrontInfo(q4).indexNumber);
                    temp = getFrontInfo(q4);
                    removeLinked(q4);
                    addToBack(q4, temp);
            }
        }
        printf("\n");
    }


void incrementQueue(struct LinkedQueue *q2, struct LinkedQueue *q3, struct LinkedQueue *q4, int currentQueue) {
    if (currentQueue == 1) {
                if (isEmpty(q3) != 0) {
            int entered = 0;
            int tempInt = getFrontInfo(q3).indexNumber;
            struct info temp = getFrontInfo(q3);
            removeLinked(q3);
            temp.runs++;
            // if(temp.indexNumber == 0){
            //     printf("\nhiii %d\n", temp.runs);
            // }
            //ISSUE IS IF FRONT INT IS REMOVED WHAT TO DO
            if(temp.runs == 8 && size(q3) != 0){
            temp.priority++;
            temp.runs = 0;
                    if (temp.priority == 5) {
            addToBack(q2, temp);
            if(size(q3) != 0){
            tempInt = getFrontInfo(q3).indexNumber;
            temp = getFrontInfo(q3);
            temp.runs++;
            removeLinked(q3);
            // printf("\n%d %d\n",temp.indexNumber, temp.runs);
            int b = 2;
            if(temp.runs == 8 && size(q3) != 0 && b == 2){
            while(temp.runs == 8 && size(q3) != 0){
            temp.priority++;
            temp.runs = 0;
            if (temp.priority == 5) {
                        addToBack(q2, temp);
            if(size(q3) != 0){
            tempInt = getFrontInfo(q3).indexNumber;
            temp = getFrontInfo(q3);
            removeLinked(q3); 
            temp.runs++; 
            } else {
                b = 0;
            } 
                        } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);   
                        }
                        }
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);   
                    }
                    }
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);  
                    }    
            } if(size(q3) == 0){
                //TODO FIX HERE SIZE O AND REMOVED LINKS IS AN ISSUE
                if (temp.runs == 8) {
                    temp.runs = 0;
                    temp.priority++;
                    if (temp.priority == 5) {
                        addToBack(q2, temp);
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);  
                    }
                } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);  
            }                 
            }
             else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);  
            }
            // printf("\n%d\n", tempInt);
            while (getFrontInfo(q3).indexNumber != tempInt) {
                // printf("\nhii\n");
                temp = getFrontInfo(q3);
                temp.runs++;
                if (temp.runs == 8) {
                    temp.runs = 0;
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
            int entered = 0;
            int tempInt = getFrontInfo(q4).indexNumber;
            struct info temp = getFrontInfo(q4);
            removeLinked(q4);
            temp.runs++;
            // if(temp.indexNumber == 0){
            //     printf("\nhiii %d\n", temp.runs);
            // }
            //ISSUE IS IF FRONT INT IS REMOVED WHAT TO DO
            if(temp.runs == 8 && size(q4) != 0){
            temp.priority++;
            temp.runs = 0;
                    if (temp.priority == 5) {
            addToBack(q2, temp);
            if(size(q4) != 0){
            tempInt = getFrontInfo(q4).indexNumber;
            temp = getFrontInfo(q4);
            temp.runs++;
            removeLinked(q4);
            // printf("\n%d %d\n",temp.indexNumber, temp.runs);
            int b = 2;
            if(temp.runs == 8 && size(q4) != 0 && b == 2){
            while(temp.runs == 8 && size(q4) != 0){
            temp.priority++;
            temp.runs = 0;
            if (temp.priority == 3) {
                        addToBack(q3, temp);
            if(size(q4) != 0){
            tempInt = getFrontInfo(q4).indexNumber;
            temp = getFrontInfo(q4);
            removeLinked(q4); 
            temp.runs++; 
            } else {
                b = 0;
            } 
                        } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);   
                        }
                        }
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);   
                    }
                    }
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);  
                    }    
            } if(size(q4) == 0){
                //TODO FIX HERE SIZE O AND REMOVED LINKS IS AN ISSUE
                if (temp.runs == 8) {
                    temp.runs = 0;
                    temp.priority++;
                    if (temp.priority == 3) {
                        addToBack(q3, temp);
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);  
                    }
                } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);  
            }                 
            }
             else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);  
            }
            // printf("\n%d\n", tempInt);
            while (getFrontInfo(q4).indexNumber != tempInt) {
                // printf("\nhii\n");
                temp = getFrontInfo(q4);
                temp.runs++;
                if (temp.runs == 8) {
                    temp.runs = 0;
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
            // int tempInt = getFrontInfo(q2).indexNumber;
            // struct info temp = getFrontInfo(q2);
            // removeLinked(q2);
            // addToBack(q2, temp);
            // while (getFrontInfo(q2).indexNumber != tempInt) {
            //     temp = getFrontInfo(q2);
            //     temp.runs++;
            //     if (temp.runs == 7) {
            //         removeLinked(q2);
            //         temp.runs = 0;
            //         temp.priority++;
            //         addToBack(q1, temp);
            //     } else {
            //         removeLinked(q2);
            //         addToBack(q2, temp);
            //     }
            // }
            // for(int i = 0; i < size(q2) - 1; i++){
            //     struct info temp = getFrontInfo(q2);
            //     temp.runs++;
            //     if (temp.runs == 7) {
            //         removeLinked(q2);
            //         temp.runs = 0;
            //         temp.priority++;
            //         addToBack(q1, temp);
            //     } else {
            //         removeLinked(q2);
            //         addToBack(q2, temp);
            //     }
            // }
            // struct info temp = getFrontInfo(q2);
            // removeLinked(q2);
            // addToBack(q2, temp);
        }
        if (isEmpty(q3) != 0) {
            int entered = 0;
            int tempInt = getFrontInfo(q3).indexNumber;
            struct info temp = getFrontInfo(q3);
            removeLinked(q3);
            temp.runs++;
            // if(temp.indexNumber == 0){
            //     printf("\nhiii %d\n", temp.runs);
            // }
            //ISSUE IS IF FRONT INT IS REMOVED WHAT TO DO
            if(temp.runs == 8 && size(q3) != 0){
            temp.priority++;
            temp.runs = 0;
                    if (temp.priority == 5) {
            addToBack(q2, temp);
            if(size(q3) != 0){
            tempInt = getFrontInfo(q3).indexNumber;
            temp = getFrontInfo(q3);
            temp.runs++;
            removeLinked(q3);
            // printf("\n%d %d\n",temp.indexNumber, temp.runs);
            int b = 2;
            if(temp.runs == 8 && size(q3) != 0 && b == 2){
            while(temp.runs == 8 && size(q3) != 0){
            temp.priority++;
            temp.runs = 0;
            if (temp.priority == 5) {
                        addToBack(q2, temp);
            if(size(q3) != 0){
            tempInt = getFrontInfo(q3).indexNumber;
            temp = getFrontInfo(q3);
            removeLinked(q3); 
            temp.runs++; 
            } else {
                b = 0;
            } 
                        } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);   
                        }
                        }
                    }
                    }
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);  
                    }   
            } if(size(q3) == 0){
                //TODO FIX HERE SIZE O AND REMOVED LINKS IS AN ISSUE
                if (temp.runs == 8) {
                    temp.runs = 0;
                    temp.priority++;
                    if (temp.priority == 5) {
                        addToBack(q2, temp);
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);  
                    }
                } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);  
            }                 
            }
             else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);  
            }
            // printf("\n%d\n", tempInt);
            if(size(q3) != 0){
            while (getFrontInfo(q3).indexNumber != tempInt) {
                // printf("\nhii\n");
                temp = getFrontInfo(q3);
                temp.runs++;
                if (temp.runs == 8) {
                    temp.runs = 0;
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
        }
        if (isEmpty(q4) != 0) {
            int tempInt = getFrontInfo(q4).indexNumber;
            struct info temp = getFrontInfo(q4);
            removeLinked(q4);
            temp.runs++;
            if(size(q4) == 0){
                //TODO FIX HERE SIZE O AND REMOVED LINKS IS AN ISSUE
                if (temp.runs == 9) {
                    temp.runs = 0;
                    temp.priority++;
                    if (temp.priority == 3) {
                        addToBack(q3, temp);
                    } else {
                        addToBack(q4, temp);
                    }
                } else {
            addToBack(q4, temp);
            }                 
            } else {
            addToBack(q4, temp);
            }
            if (isEmpty(q4) != 0) {
            while (getFrontInfo(q4).indexNumber != tempInt) {
                temp = getFrontInfo(q4);
                temp.runs++;
                if (temp.runs == 8) {
                    temp.runs = 0;
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
    } else if (currentQueue == 3) {
        if (isEmpty(q3) != 0) {
            int entered = 0;
            int tempInt = getFrontInfo(q3).indexNumber;
            struct info temp = getFrontInfo(q3);
            removeLinked(q3);
            temp.runs++;
            // if(temp.indexNumber == 0){
            //     printf("\nhiii %d\n", temp.runs);
            // }
            //ISSUE IS IF FRONT INT IS REMOVED WHAT TO DO
            if(temp.runs == 8 && size(q3) != 0){
            temp.priority++;
            temp.runs = 0;
                    if (temp.priority == 5) {
            addToBack(q2, temp);
            if(size(q3) != 0){
            tempInt = getFrontInfo(q3).indexNumber;
            temp = getFrontInfo(q3);
            temp.runs++;
            removeLinked(q3);
            // printf("\n%d %d\n",temp.indexNumber, temp.runs);
            int b = 2;
            if(temp.runs == 8 && size(q3) != 0 && b == 2){
            while(temp.runs == 8 && size(q3) != 0){
            temp.priority++;
            temp.runs = 0;
            if (temp.priority == 5) {
                        addToBack(q2, temp);
            if(size(q3) != 0){
            tempInt = getFrontInfo(q3).indexNumber;
            temp = getFrontInfo(q3);
            removeLinked(q3); 
            temp.runs++; 
            } else {
                b = 0;
            } 
                        } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);   
                        }
                        }
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);   
                    }
                    }
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);  
                    }    
            } if(size(q3) == 0){
                //TODO FIX HERE SIZE O AND REMOVED LINKS IS AN ISSUE
                if (temp.runs == 8) {
                    temp.runs = 0;
                    temp.priority++;
                    if (temp.priority == 5) {
                        addToBack(q2, temp);
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);  
                    }
                } else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);  
            }                 
            }
             else if(entered == 0){
                            entered = 1;
                         addToBack(q3, temp);  
            }
            // printf("\n%d\n", tempInt);
            while (getFrontInfo(q3).indexNumber != tempInt) {
                // printf("\nhii\n");
                temp = getFrontInfo(q3);
                temp.runs++;
                if (temp.runs == 8) {
                    temp.runs = 0;
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
            int entered = 0;
            int tempInt = getFrontInfo(q4).indexNumber;
            struct info temp = getFrontInfo(q4);
            removeLinked(q4);
            temp.runs++;
            // if(temp.indexNumber == 0){
            //     printf("\nhiii %d\n", temp.runs);
            // }
            //ISSUE IS IF FRONT INT IS REMOVED WHAT TO DO
            if(temp.runs == 8 && size(q4) != 0){
            temp.priority++;
            temp.runs = 0;
                    if (temp.priority == 5) {
            addToBack(q2, temp);
            if(size(q4) != 0){
            tempInt = getFrontInfo(q4).indexNumber;
            temp = getFrontInfo(q4);
            temp.runs++;
            removeLinked(q4);
            // printf("\n%d %d\n",temp.indexNumber, temp.runs);
            int b = 2;
            if(temp.runs == 8 && size(q4) != 0 && b == 2){
            while(temp.runs == 8 && size(q4) != 0){
            temp.priority++;
            temp.runs = 0;
            if (temp.priority == 3) {
                        addToBack(q3, temp);
            if(size(q4) != 0){
            tempInt = getFrontInfo(q4).indexNumber;
            temp = getFrontInfo(q4);
            removeLinked(q4); 
            temp.runs++; 
            } else {
                b = 0;
            } 
                        } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);   
                        }
                        }
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);   
                    }
                    }
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);  
                    }    
            } if(size(q4) == 0){
                //TODO FIX HERE SIZE O AND REMOVED LINKS IS AN ISSUE
                if (temp.runs == 8) {
                    temp.runs = 0;
                    temp.priority++;
                    if (temp.priority == 3) {
                        addToBack(q3, temp);
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);  
                    }
                } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);  
            }                 
            }
             else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);  
            }
            // printf("\n%d\n", tempInt);
            while (getFrontInfo(q4).indexNumber != tempInt) {
                // printf("\nhii\n");
                temp = getFrontInfo(q4);
                temp.runs++;
                if (temp.runs == 8) {
                    temp.runs = 0;
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
   if (isEmpty(q4) != 0) {
            int entered = 0;
            int tempInt = getFrontInfo(q4).indexNumber;
            struct info temp = getFrontInfo(q4);
            removeLinked(q4);
            temp.runs++;
            // if(temp.indexNumber == 0){
            //     printf("\nhiii %d\n", temp.runs);
            // }
            //ISSUE IS IF FRONT INT IS REMOVED WHAT TO DO
            if(temp.runs == 8 && size(q4) != 0){
            temp.priority++;
            temp.runs = 0;
                    if (temp.priority == 5) {
            addToBack(q2, temp);
            if(size(q4) != 0){
            tempInt = getFrontInfo(q4).indexNumber;
            temp = getFrontInfo(q4);
            temp.runs++;
            removeLinked(q4);
            // printf("\n%d %d\n",temp.indexNumber, temp.runs);
            int b = 2;
            if(temp.runs == 8 && size(q4) != 0 && b == 2){
            while(temp.runs == 8 && size(q4) != 0){
            temp.priority++;
            temp.runs = 0;
            if (temp.priority == 3) {
                        addToBack(q3, temp);
            if(size(q4) != 0){
            tempInt = getFrontInfo(q4).indexNumber;
            temp = getFrontInfo(q4);
            removeLinked(q4); 
            temp.runs++; 
            } else {
                b = 0;
            } 
                        } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);   
                        }
                        }
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);   
                    }
                    }
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);  
                    }    
            } if(size(q4) == 0){
                //TODO FIX HERE SIZE O AND REMOVED LINKS IS AN ISSUE
                if (temp.runs == 8) {
                    temp.runs = 0;
                    temp.priority++;
                    if (temp.priority == 3) {
                        addToBack(q3, temp);
                    } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);  
                    }
                } else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);  
            }                 
            }
             else if(entered == 0){
                            entered = 1;
                         addToBack(q4, temp);  
            }
            // printf("\n%d\n", tempInt);
            while (getFrontInfo(q4).indexNumber != tempInt) {
                // printf("\nhii\n");
                temp = getFrontInfo(q4);
                temp.runs++;
                if (temp.runs == 8) {
                    temp.runs = 0;
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
}

int main(int argc, char *argv[]) {
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
    struct info *everything = (struct info *) malloc(10 * sizeof (struct info));
    // char fileName[100];
    char index;
    int indexNumber;
    int arrival;
    int priority;
    int age;
    int cpuTime;
    int checker = 0;
    // scanf("%s", fileName);
    FILE *fp = fopen(argv[1], "r");
    while (!feof(fp)) {
        fscanf(fp, "%c%d %d %d %d %d ", &index, &indexNumber, &arrival, &priority, &age, &cpuTime);
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
        everything[amount].ready = -1;
        // printf("%c%d %d %d %d %d\n",everything[amount].index,everything[amount].indexNumber,everything[amount].arrival,everything[amount].priority,everything[amount].age,everything[amount].cpuTime);
        amount++;
        if (amount == capacity - 1) {
            capacity = capacity * 2;
            everything = realloc(everything, capacity * sizeof (struct info));
        }
    }
    int count = amount;
    printf("Index Priority   Arrival    End   Ready CPU_Time   Waiting\n");
    while (isEmpty(q1) != 0 || isEmpty(q2) != 0 || isEmpty(q3) != 0 || isEmpty(q4) != 0 || (count) != 0) {
        if(checker == 0){
        for (int j = 0; j < amount; j++) {
            if (everything[j].priority == 6 && everything[j].arrival == i) {
                addToBack(q1, everything[j]);
                count--;
            } else if (everything[j].priority == 5 && everything[j].arrival == i) {
                addToBack(q2, everything[j]);
                count--;
            } else if (everything[j].priority == 4 && everything[j].arrival == i) {
                addToBack(q3, everything[j]);
                count--;
            } else if (everything[j].priority == 3 && everything[j].arrival == i) {
                addToBack(q3, everything[j]);
                count--;
            } else if (everything[j].priority == 2 && everything[j].arrival == i) {
                addToBack(q4, everything[j]);
                count--;
            } else if (everything[j].priority == 1 && everything[j].arrival == i) {
                addToBack(q4, everything[j]);
                count--;
            }
        }
        }
        checker = 0;
        if (isEmpty(q1) == 1) {
            //TODO ADD CHECKS FOR PREMTION
            if (isEmpty(q3) == 1) {
                if (getFrontInfo(q3).quantums != 0) {
                    setQuantums(q3, 0);
                    setRuns(q3, 0);
                    struct info temp = getFrontInfo(q3);
                    removeLinked(q3);
                    incrementQueue(q2, q3, q4, 3);
                    addToBack(q3,temp);
                }
                }
                if(isEmpty(q4) == 1){
                 if (getFrontInfo(q4).quantums != 0) {
                    setQuantums(q4, 0);
                    setRuns(q4, 0);
                    incrementQueue(q2, q3, q4, 4);
                }
            }
            setTimesRun(q1, getFrontInfo(q1).timesRun + 1);
            while (getFrontInfo(q1).cpuTime != getFrontInfo(q1).totalQuantums && getFrontInfo(q1).quantums != 5) {
                if (getFrontInfo(q1).ready == -1) {
                    setReady(q1, i);
                }
                setTotalQuantums(q1, getFrontInfo(q1).totalQuantums + 1);
                setQuantums(q1, getFrontInfo(q1).quantums + 1);
                // debugHelper(q1,q2,q3,q4,i);
                i++;
                for (int j = 0; j < amount; j++) {
                    if (everything[j].priority == 6 && everything[j].arrival == i) {
                        if(getFrontInfo(q1).quantums == 5){
                            everything[j].runs--;
                        }
                        addToBack(q1, everything[j]);
                        count--;
                    } else if (everything[j].priority == 5 && everything[j].arrival == i) {
                        if(getFrontInfo(q1).quantums == 5){
                            everything[j].runs--;
                        }
                        addToBack(q2, everything[j]);
                        count--;
                    } else if (everything[j].priority == 4 && everything[j].arrival == i) {
                        if(getFrontInfo(q1).quantums == 5){
                            everything[j].runs--;
                        }
                        addToBack(q3, everything[j]);
                        count--;
                    } else if (everything[j].priority == 3 && everything[j].arrival == i) {
                        if(getFrontInfo(q1).quantums == 5){
                            everything[j].runs--;
                        }
                        addToBack(q3, everything[j]);
                        count--;
                    } else if (everything[j].priority == 2 && everything[j].arrival == i) {
                        if(getFrontInfo(q1).quantums == 5){
                            everything[j].runs--;
                        }
                        addToBack(q4, everything[j]);
                        count--;
                    } else if (everything[j].priority == 1 && everything[j].arrival == i) {
                        if(getFrontInfo(q1).quantums == 5){
                            everything[j].runs--;
                        }
                        addToBack(q4, everything[j]);
                        count--;
                    }
                }
            }
            checker = 1;
            setQuantums(q1, 0);
            setRuns(q1, 0);
            if (getFrontInfo(q1).cpuTime == getFrontInfo(q1).totalQuantums) {
                struct info temp = getFrontInfo(q1);
                removeLinked(q1);
                printf("%c%-5d %-6d %-6d %-6d %-6d %-6d %-6d\n", temp.index, temp.indexNumber, temp.priority, temp.arrival, i, temp.ready, temp.cpuTime, (i - (temp.ready + temp.cpuTime)));
                incrementQueue(q2, q3, q4, 1);
            } else if (getFrontInfo(q1).timesRun == 5) {
                setTimesRun(q1, 0);
                setPriority(q1, getFrontInfo(q1).priority - 1);
                struct info temp = getFrontInfo(q1);
                removeLinked(q1);
                addToBack(q2, temp);
                incrementQueue(q2, q3, q4, 1);
                //TODO ADD INCREMENT QUEUE
            } else {
                incrementQueue(q2, q3, q4, 1);
                struct info temp = getFrontInfo(q1);
                removeLinked(q1);
                addToBack(q1, temp);
            }

        } else if (isEmpty(q2) == 1) {
            if (isEmpty(q3) == 1 && isEmpty(q4) == 1) {
                if (getFrontInfo(q3).quantums != 0) {
                    setQuantums(q3, 0);
                    setRuns(q3, 0);
                    incrementQueue(q2, q3, q4, 3);
                } else if (getFrontInfo(q4).quantums != 0) {
                    setQuantums(q4, 0);
                    setRuns(q4, 0);
                    incrementQueue(q2, q3, q4, 4);
                }
            }
            setTimesRun(q2, getFrontInfo(q2).timesRun + 1);
            while (getFrontInfo(q2).cpuTime != getFrontInfo(q2).totalQuantums && getFrontInfo(q2).quantums != 5) {
                if (getFrontInfo(q2).ready == -1) {
                    setReady(q2, i);
                }
                setTotalQuantums(q2, getFrontInfo(q2).totalQuantums + 1);
                setQuantums(q2, getFrontInfo(q2).quantums + 1);
                // debugHelper(q1,q2,q3,q4,i);
                i++;
                for (int j = 0; j < amount; j++) {
                    if (everything[j].priority == 6 && everything[j].arrival == i) {
                        if(getFrontInfo(q2).quantums == 5){
                            everything[j].runs--;
                        }
                        addToBack(q1, everything[j]);
                        count--;
                    } else if (everything[j].priority == 5 && everything[j].arrival == i) {
                        if(getFrontInfo(q2).quantums == 5){
                            everything[j].runs--;
                        }
                        addToBack(q2, everything[j]);
                        count--;
                    } else if (everything[j].priority == 4 && everything[j].arrival == i) {
                        if(getFrontInfo(q2).quantums == 5){
                            everything[j].runs--;
                        }
                        addToBack(q3, everything[j]);
                        count--;
                    } else if (everything[j].priority == 3 && everything[j].arrival == i) {
                        if(getFrontInfo(q2).quantums == 5){
                            everything[j].runs--;
                        }
                        addToBack(q3, everything[j]);
                        count--;
                    } else if (everything[j].priority == 2 && everything[j].arrival == i) {
                        if(getFrontInfo(q2).quantums == 5){
                            everything[j].runs--;
                        }
                        addToBack(q4, everything[j]);
                        count--;
                    } else if (everything[j].priority == 1 && everything[j].arrival == i) {
                        if(getFrontInfo(q2).quantums == 5){
                            everything[j].runs--;
                        }
                        addToBack(q4, everything[j]);
                        count--;
                    }
                }
            }
            checker = 1;
            setQuantums(q2, 0);
            setRuns(q2, 0);
            if (getFrontInfo(q2).cpuTime == getFrontInfo(q2).totalQuantums) {
                //MAY BREAK HERE
                struct info temp = getFrontInfo(q2);
                removeLinked(q2);
                printf("%c%-5d %-6d %-6d %-6d %-6d %-6d %-6d\n", temp.index, temp.indexNumber, temp.priority, temp.arrival, i, temp.ready, temp.cpuTime, (i - (temp.ready + temp.cpuTime)));
                incrementQueue(q2, q3, q4, 2);
            } else if (getFrontInfo(q2).timesRun == 5) {
                setTimesRun(q2, 0);
                setPriority(q2, getFrontInfo(q2).priority - 1);
                struct info temp = getFrontInfo(q2);
                removeLinked(q2);
                addToBack(q3, temp);
                incrementQueue(q2, q3, q4, 2);
            } else {
                struct info temp = getFrontInfo(q2);
                removeLinked(q2);
                addToBack(q2, temp);
                incrementQueue(q2, q3, q4, 2);
            }

        } else if (isEmpty(q3) == 1) {
            if (isEmpty(q4) == 1) {
                if (getFrontInfo(q4).quantums != 0) {
                    setQuantums(q4, 0);
                    setRuns(q4, 0);
                    incrementQueue(q2, q3, q4, 4);
                }
            }
            //TODO FIX HERE
            if (getFrontInfo(q3).quantums == 10) {
                // printf("\n%d %d\n", getFrontInfo(q3).priority , getFrontInfo(q3).indexNumber);
                setTimesRun(q3, getFrontInfo(q3).timesRun + 1);
            }
            if (getFrontInfo(q3).cpuTime != getFrontInfo(q3).totalQuantums && getFrontInfo(q3).quantums != 10) {
                if (getFrontInfo(q3).ready == -1) {
                    setReady(q3, i);
                }
                setTotalQuantums(q3, getFrontInfo(q3).totalQuantums + 1);
                setQuantums(q3, getFrontInfo(q3).quantums + 1);
            } else {
                if (getFrontInfo(q3).cpuTime == getFrontInfo(q3).totalQuantums) {
                    struct info temp = getFrontInfo(q3);
                    removeLinked(q3);
                    incrementQueue(q2, q3, q4, 3);
                    printf("%c%-5d %-6d %-6d %-6d %-6d %-6d %-6d\n", temp.index, temp.indexNumber, temp.priority, temp.arrival, i, temp.ready, temp.cpuTime, (i - (temp.ready + temp.cpuTime)));
                } else if (getFrontInfo(q3).timesRun == 2) {
                    setTimesRun(q3, 0);
                    setQuantums(q3, 0);
                    setRuns(q3,0);
                    setPriority(q3, getFrontInfo(q3).priority - 1);
                    struct info temp = getFrontInfo(q3);
                    removeLinked(q3);
                    if(temp.priority == 2){ 
                    addToBack(q4, temp);
                    incrementQueue(q2, q3, q4, 3);  
                    } else { 
                    addToBack(q3, temp);  
                    incrementQueue(q2, q3, q4, 3);  
                    }                   
                    
                } else {
                    setQuantums(q3, 0);                 
                    struct info temp = getFrontInfo(q3);
                    removeLinked(q3);
                    incrementQueue(q2, q3, q4, 3);
                    addToBack(q3, temp);
                }
            }
            // debugHelper(q1,q2,q3,q4,i);
            if(size(q3) != 0){
                if(getFrontInfo(q3).quantums != 0){
            i++;
                }
            }
        } else if(isEmpty(q4) == 1){
            // printf("\n%d\n",i);
            if (getFrontInfo(q4).cpuTime != getFrontInfo(q4).totalQuantums && getFrontInfo(q4).quantums != 20) {
                if (getFrontInfo(q4).ready == -1) {
                    setReady(q4, i);
                }
                setTotalQuantums(q4, getFrontInfo(q4).totalQuantums + 1);
                setQuantums(q4, getFrontInfo(q4).quantums + 1);
            } else {
                if (getFrontInfo(q4).cpuTime == getFrontInfo(q4).totalQuantums) {
                    struct info temp = getFrontInfo(q4);
                    incrementQueue(q2, q3, q4, 4);
                    removeLinked(q4);
                    printf("%c%-5d %-6d %-6d %-6d %-6d %-6d %-6d\n", temp.index, temp.indexNumber, temp.priority, temp.arrival, i, temp.ready, temp.cpuTime, (i - (temp.ready + temp.cpuTime)));
                } else {
                    setQuantums(q4, 0);
                    struct info temp = getFrontInfo(q4);
                    removeLinked(q4);
                    incrementQueue(q2, q3, q4, 4);
                    addToBack(q4, temp);
                }
            }
            // debugHelper(q1,q2,q3,q4,i);
            if(size(q4) == 0 || getFrontInfo(q4).quantums != 0){
            i++;
            }
        }   
    }
    free(everything);
    free(q1);
    free(q2);
    free(q3);
    free(q4);
}



