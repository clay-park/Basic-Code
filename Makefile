#handles overall encode and decode
all: encode


#cleans and then compiles encode
encode:
	gcc -std=c11 OnlineService.c -o run


