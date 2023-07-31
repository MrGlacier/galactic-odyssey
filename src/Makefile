CC = gcc
FLAGS = -g -Wall

# game
_game_obj = game.o
game_obj = $(patsubst %, %, $(_game_obj))

%.o: %.c
	$(CC) -c -o $@ $<

_main_obj = main.o
main_obj = $(patsubst %, %, $(_main_obj))

%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

main: $(main_obj) $(game_obj)
	$(CC) $(FLAGS) -o ../bin/$@ $^

clean:
	rm -rf *.o
	rm -rf ../bin/*
