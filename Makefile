#handles overall encode and decode
all: encode


#cleans and then compiles encode
encode:
	gcc -ggdb -o Scheduler Scheduler.c Queue.c


