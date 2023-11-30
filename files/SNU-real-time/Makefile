CC=goto-cc
CFLAGS=

all: *.c
	-make $(patsubst %.c, %, $(wildcard *.c))

clean:
	rm -f $(patsubst %.c, %, $(wildcard *.c))
