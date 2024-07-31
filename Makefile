SRC_DIR = src

CC = g++

SOURCE_FILES := $(shell dir /b/s *.cpp)
OBJECT_FILES := $(SOURCE_FILES:.c=.o)
HEADER_FILES := $(shell dir /b/s *.hpp)

.PHONY = build linking compile clean cppcheck clang-format

build: cppcheck clang-format compile linking

linking:
	-g++ -o Main $(OBJECT_FILES)

compile: $(SOURCE_FILES)
	g++ -Wall -Wextra -c $^

link:
	g++ -o Main.exe main.o tokens.o

clean:
	-@del *.o
	-@del *exe

cppcheck: $(SOURCE_FILES) $(HEADER_FILES)
	@cppcheck $^

clang-format: $(SOURCE_FILES) $(HEADER_FILES)
	clang-format -i $^