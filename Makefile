# A makefile with explicit rules for everything we need to build.

# Rebuild the expecutable if one of the objects changes.
CC = gcc
# General Build commands
CFLAGS = -Wall -std=c11
#sets up hangman
Scheduler: Scheduler.o Queue.o
Scheduler.o: Scheduler.h Scheduler.h
#handles the worldsit object
Queue.o: Queue.h
