#include "Queue.h"

void CreateQueue(struct LinkedQueue *q){
    q->front = NULL;
    q->back = NULL;
    q->size = 0;
}
//Test
struct info getFrontInfo(struct LinkedQueue *q){
return q-> front ->data;
}

void removeLinked(struct LinkedQueue *q){
Node *temp = q->front;
q->front = q->front->next;
q->size--;
free(temp ->data.index);
free(temp);

}

void addToBack(struct LinkedQueue *q, struct info a){
    if(q->front == NULL){
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
    return EXIT_SUCCESS;
} else{
return EXIT_FAILURE;
} 
}