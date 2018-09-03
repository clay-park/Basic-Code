#include "Scheduler.h"
#include "Queue.h"

int main(){
int i = 0;
struct LinkedQueue *q1 = NULL;
struct LinkedQueue *q2 = NULL;
struct LinkedQueue *q3 = NULL;
struct LinkedQueue *q4 = NULL;
CreateQueue(q1);
CreateQueue(q2);
CreateQueue(q3);
CreateQueue(q4);
int amount = 0;
int capacity = 10;
struct info *everything = (struct info *)malloc(10 * sizeof(struct info));
char fileName[100];
char index;
int indexNumber;
int arrival;
int priority;
int age;
int cpuTime;
int runs;
scanf("%s", fileName);
FILE *fp=fopen(fileName, "r");
while(!feof(fileName)){
    fscanf(fp, "%c%d %d %d %d %d %d%[\n]", &index, &indexNumber, &arrival, &priority, &age, &cpuTime, &runs);
    everything[amount].index = index;
    everything[amount].indexNumber = indexNumber;
    everything[amount].arrival = arrival;
    everything[amount].priority = priority;
    everything[amount].age = age;
    everything[amount].cpuTime = cpuTime;
    everything[amount].runs = runs;
    if(amount = capacity - 1){
        capacity = capacity * 2;
        everything = realloc(everything, capacity);
    }
}
//scanf

while(isEmpty(q1) != 0 && isEmpty(q2) != 0 && isEmpty(q3) != 0){
    for(int j = 0; j < amount; j++){
        if(everything[j].priority == 5 && arrival == i){
            addToBack(q1,everything[j]);
        } else if(everything[j].priority == 6 && arrival == i){
            addToBack(q2,everything[j]);
        } else if(everything[j].priority == 4 && arrival == i){
            addToBack(q3,everything[j]);
        } else if(everything[j].priority == 3 && arrival == i){
            addToBack(q3,everything[j]);            
        } else if(everything[amount].priority == 2 && arrival == i){
            addToBack(q4,everything[j]);            
        } else if(everything[amount].priority == 1 && arrival == i){
            addToBack(q4,everything[j]);            
        }
    }




    i++;
}
free(everything);
free(q1);
free(q2);
free(q3);
free(q4);
}

