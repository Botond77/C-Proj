FILES = conversions.o
TARGET = a.out

all: $(TARGET)

$(TARGET): main.c $(FILES)
	gcc -std=gnu99 -O0 -g main.c $(FILES) -o $(TARGET) -lm

conversions.o: conversions.c conversions.h
	gcc -std=gnu99 -O0 -g -c conversions.c -o conversions.o

clean:
	rm -f $(TARGET) $(FILES)
