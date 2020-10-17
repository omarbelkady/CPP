#include<iostream>
using namespace std;

int main(){
	int llenthus = 266745377;
	//To create a pointer I say what I want to point to in this case it would be an integer
	int *pintoslov= &llenthus;
	
	//Getting the address of llenthus format is in hexadecimal
	std::cout<<&llenthus<<std::endl;

	std::cout<< llenthus <<std::endl;

	//Remember references can be reassigned but pointers always refer to the same location in memory
	

	//Get the value that pintoslov points to
	std::cout<< *pintoslov << std::endl;

	//Reassigning llenthus
	llenthus = 26265568;

	//creating a new variable
	int cobol_enthus = 26265;

	//Update the value pintos lov by changing it from it being set to the address of llenthus to the address of cobol_enthus
	pintoslov= &cobol_enthus;
	//As you can now see I have now broken the connection

	std::cout<< llenthus<<" "<< *pintoslov<<" " << cobol_enthus<<std::endl;

	return 0;
}
