objects = b_pow.o Integer_arithmetic_i.o Main_i.o b_main.o
all: $(objects)
	$(CC) $^ -o calculator

$(objects): %.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm -f *.o calculator