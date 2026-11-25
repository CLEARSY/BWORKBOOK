objects = link_app_i.o link_receiver_i.o xor_ops.o xor_spec.o main.o

all: $(objects)
	$(CC) $^ -o xor

$(objects): %.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm -f *.o xor
