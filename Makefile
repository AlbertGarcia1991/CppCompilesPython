SRC_DIR = src

CC = g++


.PHONY = all clean cppcheck

all: cppcheck
	$(CC) -o Main.exe -c $(SRC_DIR)/main.cpp

clean:
	-@del *exe

cppcheck:
	@cppcheck src