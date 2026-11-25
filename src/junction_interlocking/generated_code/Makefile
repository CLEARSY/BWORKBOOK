objects = entry_point_i.o interlocking_i.o switch_bs.o track_bs.o ihm_bs.o main.o

all: $(objects)
	$(CC) $^ -o interlocking

$(objects): %.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm -f *.o interlocking
