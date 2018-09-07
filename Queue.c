#include "Queue.h"

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