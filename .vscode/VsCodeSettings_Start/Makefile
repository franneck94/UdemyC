COMPILATION_MODE ?= Debug
ENABLE_WARNINGS ?= 1
WARNINGS_AS_ERRORS ?= 0
C_COMPILER ?= gcc
C_STANDARD ?= c11
EXECUTABLE_NAME ?= main

ifeq ($(OS), Windows_NT)
RM = rm -f #RM = del /Q /F
else
RM = rm -f
endif

ifeq ($(COMPILATION_MODE), Debug)
C_COMPILER_FLAGS = -g -std=$(C_STANDARD)
else ifeq ($(COMPILATION_MODE), Release)
C_COMPILER_FLAGS = -O3 -std=$(C_STANDARD)
endif

ifeq ($(ENABLE_WARNINGS), 1)
C_COMPILER_FLAGS += -Wall -Wextra -Wpedantic
endif

ifeq ($(WARNINGS_AS_ERRORS), 1)
C_COMPILER_FLAGS += -Werror
endif

C_COMPILER_CALL = $(C_COMPILER) $(C_COMPILER_FLAGS)

CPP_SRCS = $(wildcard *.c)
CPP_OBJECTS = $(filter %.o, $(patsubst %.c,  %.o, $(CPP_SRCS)))

build: $(EXECUTABLE_NAME)

build_single: 
	$(C_COMPILER_CALL) -o $(EXECUTABLE_NAME) $(FILE_NAME)

$(EXECUTABLE_NAME): $(CPP_OBJECTS)
	$(C_COMPILER_CALL) $^ -o $@

%.o : %.c
	$(C_COMPILER_CALL) -c $< -o $@

execute:
	./$(EXECUTABLE_NAME)

clean:
	$(RM) *.o
