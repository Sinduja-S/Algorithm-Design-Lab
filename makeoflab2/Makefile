all: obj/1_infiarr.o obj/1_sumarr.o obj/1_pattern.o obj/main.o
	g++ obj/1_infiarr.o obj/1_sumarr.o obj/1_pattern.o obj/main.o -o all
obj/1_infiarr.o: src/1_infiarr.cpp
	g++ -c src/1_infiarr.cpp && mv 1_infiarr.o obj/1_infiarr.o
obj/1_sumarr.o: src/1_sumarr.cpp
	g++ -c src/1_sumarr.cpp && mv 1_sumarr.o obj/1_sumarr.o
obj/1_pattern.o: src/1_pattern.cpp
	g++ -c src/1_pattern.cpp && mv 1_pattern.o obj/1_pattern.o
obj/main.o: src/main.cpp
	g++ -c src/main.cpp && mv main.o obj/main.o
