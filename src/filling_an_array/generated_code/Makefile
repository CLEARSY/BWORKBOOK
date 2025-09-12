objects = ctx_i.o iter_services_i.o array_i.o entry_point_i.o main.o

TARGET = fill_array

all: $(TARGET)

$(TARGET): $(objects)
	$(CC) $(CFLAGS) $(objects) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)