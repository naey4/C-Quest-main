CC = gcc
CFLAGS = -O2 -Wall -std=c99

OBJS = main.o game.o score.o

all: cquest.exe

cquest.exe: $(OBJS)
	$(CC) $(CFLAGS) -o cquest.exe $(OBJS)

main.o: main.c game.h score.h
	$(CC) $(CFLAGS) -c main.c

game.o: game.c game.h score.h
	$(CC) $(CFLAGS) -c game.c

score.o: score.c score.h
	$(CC) $(CFLAGS) -c score.c

clean:
	del *.o cquest.exe scores.json

.PHONY: all clean
