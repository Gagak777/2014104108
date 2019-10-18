SRCS = $(shell find ./* -type f -name *.c)
OBJS = $(SRCS:.c=.o)
TARGET = gugu.out

all: $(TARGET)

$(TARGET): $(OBJS)
	gcc -o $@ $(OBJS)

.PHONY:
	clean

clean:
	$(RM) $(OBJS) $(TARGET)
