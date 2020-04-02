all: obj/qsort.o obj/nrootn.o obj/bgminmax.o obj/main.o obj/logn2.o obj/n+logn-2.o
	g++ obj/qsort.o obj/nrootn.o obj/bgminmax.o obj/main.o obj/logn2.o obj/n+logn-2.o -o all
obj/qsort.o: src/qsort.cpp
	g++ -c -lm src/qsort.cpp && mv qsort.o obj/qsort.o
obj/nrootn.o: src/nrootn.cpp
	g++ -c -lm src/nrootn.cpp && mv nrootn.o obj/nrootn.o
obj/bgminmax.o: src/bgminmax.cpp
	g++ -c -lm src/bgminmax.cpp && mv bgminmax.o obj/bgminmax.o
obj/logn2.o: src/logn2.cpp
	g++ -c -lm src/logn2.cpp && mv logn2.o obj/logn2.o
obj/n+logn-2.o: src/n+logn-2.cpp
	g++ -c -lm src/n+logn-2.cpp && mv n+logn-2.o obj/n+logn-2.o
obj/main.o: src/main.cpp
	g++ -c -lm src/main.cpp && mv main.o obj/main.o