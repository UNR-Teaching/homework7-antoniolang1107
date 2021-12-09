dictionary: main.o
	g++ main.o -o dictionary

main.o: main.cpp dictionary.h entry.h
	g++ -c -std=c++11 main.cpp

clean:
	rm *.o dictionary