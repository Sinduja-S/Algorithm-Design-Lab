all:union dcmerge heap bst kpointer

union:obj/unionmerge.o obj/input.o
	g++ obj/unionmerge.o obj/input.o -o union
    
dcmerge:obj/dcmerge.o obj/input.o
	g++ obj/dcmerge.o obj/input.o -o dcmerge
	
heap:obj/heap.o obj/input.o
	g++ obj/heap.o obj/input.o -o heap
	
bst:obj/bst.o obj/input.o
	g++ obj/bst.o obj/input.o -o bst
	
kpointer:obj/kpointer.o obj/input.o
	g++ obj/kpointer.o obj/input.o -o kpoint
        
obj/unionmerge.o:src/unionmerge.cpp
	g++ -c src/unionmerge.cpp -o obj/unionmerge.o
    
obj/dcmerge.o:src/unionmerge.cpp
	g++ -c src/unionmerge.cpp -o obj/dcmerge.o
	
obj/heap.o:src/heap.cpp
	g++ -c src/heap.cpp -o obj/heap.o
	
obj/bst.o:src/bst.cpp
	g++ -c src/bst.cpp -o obj/bst.o
	
obj/kpointer.o:src/kpointer.cpp
	g++ -c src/kpointer.cpp -o obj/kpointer.o
    
obj/input.o:src/input.cpp
	g++ -c src/input.cpp -o obj/input.o
