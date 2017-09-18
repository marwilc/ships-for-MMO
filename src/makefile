CC=gcc
CFLAGS=-I.
DEPS = Ships
OBJ = ShipsMain.o Ships.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

shipsRun: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

clean:
		rm -f $(OBJ) shipsRun
