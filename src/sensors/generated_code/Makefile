objects = main.o sensor_store_i.o sctx_i.o

all: $(objects)
	$(CC) $^ -o sensors

$(objects): %.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm -f *.o sensors
