CC = gcc

CFLAGS = -g -o

TARGET = memory_lab

FILES = memory_lab.c

all: $(TARGET)

$(TARGET): $(FILES)
	$(CC) $(CFLAGS) $(TARGET) $(FILES)

clean:
	rm -f $(TARGET)

memory_leak:
	valgrind --leak-check=full ./$(TARGET) memory_leak

stack_overflow:
	./$(TARGET) stack_overflow

out_of_memory:
	ulimit -v 100000 && ./$(TARGET) out_of_memory



