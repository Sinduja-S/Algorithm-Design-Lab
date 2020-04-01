all: bfsspath newbfs lpath_dir2 lpath_undir Max_Weight_MST
bfsspath:bfsspath.o hbfsspath.o
	g++ obj/bfsspath.o obj/hbfsspath.o -o bfsspath
bfsspath.o:
	g++ -c src/bfsspath.cpp -o obj/bfsspath.o
hbfsspath.o:
	g++ -c src/hbfsspath.cpp -o obj/hbfsspath.o
newbfs:newbfs.o hnewbfs.o
	g++ obj/newbfs.o obj/hnewbfs.o -o newbfs
newbfs.o:
	g++ -c src/newbfs.cpp -o obj/newbfs.o
hnewbfs.o:
	g++ -c src/hnewbfs.cpp -o obj/hnewbfs.o
lpath_undir:lpath_undir.o hlpath_undir.o
	g++ obj/lpath_undir.o obj/hlpath_undir.o -o lpath_undir
lpath_undir.o:
	g++ -c src/lpath_undir.cpp -o obj/lpath_undir.o
hlpath_undir.o:
	g++ -c src/hlpath_undir.cpp -o obj/hlpath_undir.o
lpath_dir2:lpath_dir2.o hlpath_dir2.o
	g++ obj/lpath_dir2.o obj/hlpath_dir2.o -o lpath_dir2
lpath_dir2.o:
	g++ -c src/lpath_dir2.cpp -o obj/lpath_dir2.o
hlpath_dir2.o:
	g++ -c src/hlpath_dir2.cpp -o obj/hlpath_dir2.o
Max_Weight_MST:Max_Weight_MST.o input.o hMax_Weight_MST.o
	g++ obj/Max_Weight_MST.o obj/input.o obj/hMax_Weight_MST.o -o Max_Weight_MST
Max_Weight_MST.o:
	g++ -c src/Max_Weight_MST.cpp -o obj/Max_Weight_MST.o
input.o:
	g++ -c src/input.cpp -o obj/input.o
hMax_Weight_MST.o:
	g++ -c src/hMax_Weight_MST.cpp -o obj/hMax_Weight_MST.o 