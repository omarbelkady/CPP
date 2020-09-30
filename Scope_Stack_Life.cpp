//Whenever we enter a scope in C++ we push a stack frame on
//We regard this as a book pile where we can pull the top most-one and take out the one below
//We cannot yank any book from the stack
//We have to remember as soon as we remove the book from the stack it expires immediately
//any variable/any object we have within that book is gone 

#include<iostream>
#include<string>

class Characteristic{
	public:
		Characteristic(){
			std::cout<<"Created 2526 56837 6342"<<std::endl;
		}
		
		~Characteristic(){
			std::cout<<"Destroyed 968 6342 56837!"<<std::endl;
		}
};

class PointersWithAScope
{
	private:
		Characteristic* my_Pointer;
	public:
		PointersWithAScope(Characteristic* pointer) : my_Pointer(pointer)
		{
		}

		~PointersWithAScope()
		{
			delete my_Pointer;
		}
};
//Creating a pointer array
int* CreateMyArray()
{
	int array[50];//Create space for me in memory of 200 bytes for me to store 50 integers
	//This is declared on the stack
	//return *array;//Return a pointer of the stack memory address

	//The above code will get destroyed if we go out of scope because memory is allocated on the stack
	//To avoid this we change it to this to allocate memory on the heap instead
	//for it to stay around
	
	int* myLastingArray = new int[50];
	return myLastingArray;

	//Never create a stack based variable and try to return a pointer that is not good coding practice
	//An alternative is a smart pointer which is a scoped pointer. This is a wrapper class over a pointer
	//which when created allocates memory on the heap and upon destruction deletes the pointer
}


int main()
{
	{
		Characteristic lovesC_And_TS;//Stack-based

		Characteristic* lovesTSwift = new Characteristic();//Heap-based

		PointersWithAScope element = new Characteristic;
	}
	//(STACK BASED VA) Now if we enter the debug mode and I reach line 59 my object
	//gets destroyed because I went out of scope
	//
	//Line 60: However if I do a heap allocation things are different it never gets freed
	//only if our application is closed thanks to our OS
}
