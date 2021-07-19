all: add_nbo

add-nbo : main.cpp
	g++ -o add_nbo main.cpp

clean:
	rm -f add_nbo
	rm -f *.o
