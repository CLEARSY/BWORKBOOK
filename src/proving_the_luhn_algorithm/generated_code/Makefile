objects = main.o card_input_i.o iter_services_i.o ctx_i.o

all: $(objects)
	$(CC) $^ -o card

$(objects): %.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm -f *.o card
