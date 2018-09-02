#handles overall for regular method
all: Scheduler


#cleans and then compiles regular
scheduler:clean
	gcc  -Wall -std=c99  Scheduler.c Queue.c -o Scheduler

clean:
	rm -f scheduler
	rm -f *.o
	rm -f output.txt