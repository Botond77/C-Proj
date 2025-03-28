FILES = header.o
TARGET = my_program

all: $(TARGET)

$(TARGET): main.c $(FILES)
	gcc -std=gnu99 main.c $(FILES) -o $(TARGET)

header.o: header.c header.h
	gcc -std=gnu99 -c header.c -o header.o

clean:
	rm -f $(TARGET) $(FILES)
