//Sole purpose of a make file is to automate a process in a CPP application
//manually we do g++ file1 fil2 etc.
//Say I have two files nelanloves_assembly.cpp and nelanloves_pascal.cpp
//Say I changed nelanloves_assembly.cpp I do not want to recompile everything because
//Say I have more than the two file it would be a nightmare
//So what I do is output the files as file1.o(the object file)from file1.cpp and file2.o(object file) from file2.cpp
//Then I relink everything to a.out
//Makefiles reduces the number of compilation that is necessary
//
//
//Within the make file
//file1.o file1.cpp
//g++ -g file1.cpp
//math is the dir outputs files of myfirstfile and mysecondfiles
//Must tab on the second line
math: math_stuff.o math_utils.o
	g++ math_stuff.o math_utils.o -o nelanisaclover
math_stuff.o: math_stuff.cpp
	g++ -c  math_stuff.cpp
math_utils.o: math_utils.cpp
	g++ -c math_utils.cpp
clean:
	rm *.o nelanisaclover
