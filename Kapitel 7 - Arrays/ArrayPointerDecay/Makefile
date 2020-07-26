DEBUG ?= 1
ifeq ($(DEBUG), 1)
    CPPFLAGS = -g3 -Wall
else
    CPPFLAGS = -O2 -Wall
endif

CPP = gcc $(CPPFLAGS)
SRCS = $(wildcard *.c) 
OBJECTS = $(patsubst %.c, %.o, $(SRCS))

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CPP) -o $@ $^

%.o: %.c
	$(CPP) -c -o $@ $<