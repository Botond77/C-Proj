FILES = header.o
TARGET = a.out

all: $(TARGET)

$(TARGET): main.c $(FILES)
	gcc -std=gnu99 -O0 -g main.c $(FILES) -o $(TARGET) -lm

header.o: header.c header.h
	gcc -std=gnu99 -O0 -g -c header.c -o header.o

clean:
	rm -f $(TARGET) $(FILES)
