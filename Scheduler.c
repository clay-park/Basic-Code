#include "Scheduler.h"
#include "Queue.h"

int main(){
int i = 0;
struct LinkedQueue *q1 = NULL;
struct LinkedQueue *q2 = NULL;
struct LinkedQueue *q3 = NULL;
CreateQueue(q1);
CreateQueue(q2);
CreateQueue(q2);

while(isEmpty(q1) != 0 && isEmpty(q2) != 0 && isEmpty(q3) != 0){

}
free(q1);
free(q2);
free(q3);
}

