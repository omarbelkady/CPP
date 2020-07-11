#include "Omar.h"
#include<iostream>
using namespace std;

Omar::Omar()
{
	//this is my constructor
    cout<<"I am the constructor"<<endl;
}

//Step 2 of  my deconstructor creation reminder no return, no overloading, no parameters whatsoever, no void
Omar::~Omar()
{
    cout<<"I am the destructor"<<endl;//when your program finishes running your destructor gets called automatically
}
