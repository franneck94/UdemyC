DEBUG_FLAGS = -g3 -O0
RELEASE_FLAGS = -DNDEBUG -O3
COMPILER = gcc

FLAGS = $(RELEASE_FLAGS)

preprocess:
	$(COMPILER) $(FLAGS) -E main.c > Temp.c

assemble:
	$(COMPILER) $(FLAGS) -S main.c

compile:
	$(COMPILER) $(FLAGS) -c main.c -o main.o

build:
	$(COMPILER) $(FLAGS) main.o -o main
