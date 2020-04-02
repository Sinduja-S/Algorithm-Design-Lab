all:obj/unionmerge.o obj/dckarray.o obj/heap.o obj/bst.o obj/kpointer.o obj/input.o obj/mergeinsert.o obj/main.o
	g++ obj/unionmerge.o obj/dckarray.o obj/heap.o obj/bst.o obj/kpointer.o obj/input.o obj/mergeinsert.o obj/main.o -o all
        
obj/unionmerge.o:src/unionmerge.cpp
	g++ -c src/unionmerge.cpp && mv unionmerge.o obj/unionmerge.o

obj/dckarray.o:src/dckarray.cpp
	g++ -c src/dckarray.cpp && mv dckarray.o obj/dckarray.o
	
obj/heap.o:src/heap.cpp
	g++ -c src/heap.cpp && mv heap.o obj/heap.o
	
obj/bst.o:src/bst.cpp
	g++ -c src/bst.cpp && mv bst.o obj/bst.o
	
obj/kpointer.o:src/kpointer.cpp
	g++ -c src/kpointer.cpp && mv kpointer.o obj/kpointer.o
    
obj/input.o:src/input.cpp
	g++ -c src/input.cpp && mv input.o obj/input.o

obj/mergeinsert.o:src/mergeinsert.cpp
	g++ -c src/mergeinsert.cpp && mv mergeinsert.o obj/mergeinsert.o
	
obj/main.o:src/main.cpp
	g++ -c src/main.cpp && mv main.o obj/main.o
