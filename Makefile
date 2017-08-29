main: main.cpp Quadrilateral.cpp Trapezoid.cpp Square.cpp
	/usr/local/bin/g++ -std=c++11 -c main.cpp
	/usr/local/bin/g++ -std=c++11 -c Quadrilateral.cpp
	/usr/local/bin/g++ -std=c++11 -c Trapezoid.cpp
	/usr/local/bin/g++ -std=c++11 -c Square.cpp
	/usr/local/bin/g++ -std=c++11 -v main.o  Quadrilateral.o Square.o Trapezoid.o -o main -lm 
clean:
	rm main
