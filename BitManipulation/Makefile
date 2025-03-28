FILES = conversions.o bitwise.o
FLAGS = -O0 -g 
TARGET = a.out

all: $(TARGET)

$(TARGET): main.c $(FILES)
	gcc -std=gnu99 $(FLAGS) main.c $(FILES) -o $(TARGET) -lm

conversions.o: conversions.c conversions.h
	gcc -std=gnu99 $(FLAGS) -c conversions.c -o conversions.o

bitwise.o: bitwise.c bitwise.h
	gcc -std=gnu99 $(FLAGS) -c bitwise.c -o bitwise.o

clean:
	rm -f $(TARGET) $(FILES)
