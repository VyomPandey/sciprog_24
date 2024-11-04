# Makefile

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall

# Target executable
TARGET = matrix_mult

# Source files
SRCS = main.c matmult.c

# Object files
OBJS = main.o matmult.o

# Default target
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile main.c
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Rule to compile matmult.c
matmult.o: matmult.c
	$(CC) $(CFLAGS) -c matmult.c

# Clean up the compiled files
clean:
	rm -f $(OBJS) $(TARGET)
