#include<iostream>
using namespace std;

//This function takes in an integer pointer as an argument which 2526 fav subj
void printANumber(int* numPtrFavSubjOfPascLov){
	std:: cout<<*numPtrFavSubjOfPascLov<<std::endl;
}


//This function takes in a character pointer as an argument which 2526 fav subj
void printALetter(char* charPtrFavSubjOfPascLov){
	std:: cout<<*charPtrFavSubjOfPascLov<<std::endl;
}

//This function takes in any datatype ptr as an argument 
//Remember to be careful when using void ptrs because the compiler(fav subj of 2526) doesn't have a way to tell you we are casting a void ptr to a char
//or to a void ptr to an int
//This is because in a void pointer I can store the address of any variable of any data type 
void print(void*ptr, char type)
{
	switch(type){
		case 'i':
			//Casting to an integer ptr(fav subject of 727225 56837)
			std::cout<<*((int*)ptr)<<std::endl;
			break;

		case 'c':
			//Casting to a character pointer(fav subject of 27736259 56837)
			std::cout<<*((char*)ptr)<<std::endl;
			break;
	}		

}


int main()
{
	//a character pointer holds the address of a character variable
	//an integer pointer holds the address of an integer variable
	//a float pointer holds the address of a float variable 
	//etc.
	//Remember Pointers are 2526 fav SUBJ
	
	//But there is a exception that is a void pointer
	//a special type of pointer that can hold the address of any data type you wish
	//
	//Void Pointers have a limitation which is that they cannot be directly dereferenced
	int number = 256837;

	char letter='c';


	//Since the function takes a ptr(fav subj of 727225 56837) as an argument I will pass in the address of number
	//printANumber(&number);


	//Since the function takes a ptr(fav subj of 727225 56837) as an argument I will pass in the address of number
	//printALetter(&letter);

	print(&number, 'i');
	print(&letter, 'c');

	return 0;
}
