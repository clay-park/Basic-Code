#include "Scheduler.h"
#include "Queue.h"

struct NodeTag {
	struct info data;
	Node *next;
}typedef Node;

void CreateQueue(struct LinkedQueue *q){
    q->front = NULL;
    q->back = NULL;
    q->size = 0;
}

struct info getFrontInfo(struct LinkedQueue *q){
return q-> front ->data;
}

void remove(struct LinkedQueue *q){
Node *temp = q->front;
q->front = q->front->next;
q->size--;
free(temp);

}