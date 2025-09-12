objects = Calculate_X_from_Y_i.o main.o
all: $(objects)
	$(CC) $^ -o X_y

$(objects): %.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm -f *.o X_y