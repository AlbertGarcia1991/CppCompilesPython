SRC_DIR = src

CC = g++

SOURCE_FILES := $(shell dir /b/s *.cpp)
HEADER_FILES := $(shell dir /b/s *.hpp)

.PHONY = all clean cppcheck clang-format

all: cppcheck clang-format
	$(CC) -Wall -Wextra -o Main.exe -c $(SRC_DIR)/main.cpp

clean:
	-@del *exe

cppcheck: $(SOURCE_FILES) $(HEADER_FILES)
	@cppcheck $^

clang-format: $(SOURCE_FILES) $(HEADER_FILES)
	clang-format -i $^