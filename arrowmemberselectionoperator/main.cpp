//Arrow Member Selection Operator -->
#include "omar.h"
#include<iostream>

using namespace std;
main()
{
    Omar omarObject;
    //Making a pointer
    Omar *Omarspointer=&omarObject;
    omarObject.printClouds();//Accessing a class by using an object using a dot separator
    Omarspointer->printClouds();//Accessing a class #2 using a pointer using an arrow This is an arrow member selection operator
}
