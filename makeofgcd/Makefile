all: obj/recgcd1.o obj/recgcd2.o obj/recgcd3.o obj/itergcd1.o obj/itergcd3.o obj/itergcd2.o obj/main.o obj/k_numbers.o
	g++ obj/recgcd1.o obj/recgcd2.o obj/recgcd3.o obj/itergcd1.o obj/itergcd3.o obj/itergcd2.o obj/main.o obj/k_numbers.o -o all
obj/recgcd1.o: src/recgcd1.cpp
	g++ -c src/recgcd1.cpp && mv recgcd1.o obj/recgcd1.o
obj/recgcd2.o: src/recgcd2.cpp
	g++ -c src/recgcd2.cpp && mv recgcd2.o obj/recgcd2.o
obj/recgcd3.o: src/recgcd3.cpp
	g++ -c src/recgcd3.cpp && mv recgcd3.o obj/recgcd3.o
obj/itergcd1.o: src/itergcd1.cpp
	g++ -c src/itergcd1.cpp && mv itergcd1.o obj/itergcd1.o
obj/itergcd2.o: src/itergcd2.cpp
	g++ -c src/itergcd2.cpp && mv itergcd2.o obj/itergcd2.o
obj/itergcd3.o: src/itergcd3.cpp
	g++ -c src/itergcd3.cpp && mv itergcd3.o obj/itergcd3.o
obj/main.o: src/main.cpp
	g++ -c src/main.cpp && mv main.o obj/main.o
obj/k_numbers.o: src/k_numbers.cpp
	g++ -c src/k_numbers.cpp && mv k_numbers.o obj/k_numbers.o
