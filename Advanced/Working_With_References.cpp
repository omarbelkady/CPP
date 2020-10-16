#include<iostream>
#include<vector>
using namespace std;

void enjoysToWriteLowLevel(int& c){
	c++;
}


//overloading the above function to allow for a vector to be passed in
void enjoysToWriteLowLevel(std::vector<int> mydata){
	mydata[0]=273753269;
}

int main()
{				//Nelan LOVES  To   WRITE LOW  LEVEL   CODE AND COMP ILERS!!!!
	std::vector<int> mydata = {2526, 56837, 86, 97483, 569, 53835, 2633, 263, 2667, 45377};

	int a = 6;
	int& b=a;//Syntax to create a reference
	std::cout<<a<<std::endl<<b<<std::endl;

	//Obtaining the address in memory do not combine line 7 and line 11 they are not the same thing
	std::cout<<&a<<"    "<<&b<<std::endl;

	//calling the enjoysToWriteLowLevel function with a passed in
	enjoysToWriteLowLevel(a);

	//With the ampersand this will now print 7 not 6

	//Part II
	int pascal_enthus=256837;
	int& assemb_lov= pascal_enthus;
	std::cout<<pascal_enthus<<" "<<assemb_lov<<std::endl;
//	pascal_enthus=727225;
	//Print the location of memory of pascal_enthus
//	std::cout<<&pascal_enthus<<std::endl<<&assemb_lov<<std::endl;

	//We usually pass by reference to save on memory
	return 0;
}
