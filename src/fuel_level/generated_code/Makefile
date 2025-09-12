objects = ctx_i.o main_fuel_i.o main.o entry_point_i.o utils_i.o measure_bs.o

TARGET = fuel_level

all: $(TARGET)

$(TARGET): $(objects)
	$(CC) $(CFLAGS) $(objects) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)