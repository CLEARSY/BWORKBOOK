objects = acquisition_bs.o block_i.o main.o

all: $(objects)
	$(CC) $^ -o block

$(objects): %.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm -f *.o block
