objects = switch_i.o main.o
all: $(objects)
	$(CC) $^ -o switch

$(objects): %.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm -f *.o switch