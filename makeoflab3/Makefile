all: obj/ternary.o obj/summax.o obj/main.o
	g++ obj/ternary.o obj/summax.o obj/main.o -o all

obj/ternary.o: src/ternary.cpp
	g++ -c src/ternary.cpp && mv ternary.o obj/ternary.o

obj/summax.o: src/summax.cpp
	g++ -c src/summax.cpp && mv summax.o obj/summax.o

obj/main.o: src/main.cpp
	g++ -c src/main.cpp && mv main.o obj/main.o
