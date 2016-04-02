CC=gcc
CFLAGS=-g -Wall -I. -I.. -I../../libavr32/src -DSIM
DEPS =
OBJ = tt.o ../state.o ../teletype.o ../table.o \
	../euclidean/euclidean.o ../euclidean/data.o \
	../../libavr32/src/util.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tt: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm *.o
	rm ../*.o
	rm ../euclidean/*.o
	rm ../../libavr32/src/*.o
