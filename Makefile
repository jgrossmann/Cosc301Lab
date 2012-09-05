CC = gcc
CFLAGS = -g -Wall
OBJS = lab01.o main.o
DEPS = lab01.h
TARGET = lab01

$(Target): $(OBJS)
	$(CC) $(OBJS) -o $@
clean:
	rm -f $(OBJS) $(TARGET)
.c.o: $(DEPS)
	$(CC) -c $< $(CFLAGS)
