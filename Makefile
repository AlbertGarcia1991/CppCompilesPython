all:
	-@mkdir build
	-@mkdir build/bin
	g++ -o build/bin/Main.exe -c main.cpp

clean:
	-@rd /s /q build