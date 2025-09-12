objects = Airlock_pressure_bs.o Airlock_i.o main.o

all: $(objects)
	$(CC) $^ -o sas

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f *.o sas