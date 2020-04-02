all: obj/countones.o obj/hanoi.o obj/mergesort.o obj/countnegatives.o obj/gcd.o obj/main.o
	g++ obj/countones.o obj/hanoi.o obj/mergesort.o obj/countnegatives.o obj/gcd.o obj/main.o -o all

obj/countones.o: src/countones.cpp
	g++ -c src/countones.cpp && mv countones.o obj/countones.o

obj/countnegatives.o: src/countnegatives.cpp
	g++ -c src/countnegatives.cpp && mv countnegatives.o obj/countnegatives.o

obj/hanoi.o: src/hanoi.cpp
	g++ -c src/hanoi.cpp && mv hanoi.o obj/hanoi.o

obj/mergesort.o: src/mergesort.cpp
	g++ -c src/mergesort.cpp && mv mergesort.o obj/mergesort.o

obj/gcd.o: src/gcd.cpp
	g++ -c src/gcd.cpp && mv gcd.o obj/gcd.o

obj/main.o: src/main.cpp
	g++ -c src/main.cpp && mv main.o obj/main.o