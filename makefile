.PHONY: main

main:
		rm -f main.exe
		g++ main.cpp -o main -Iinclude -L. -lBearLibTerminal