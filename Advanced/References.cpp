#include<iostream>
using namespace std;


void likesToWriteLLCode(int& x){
	//a consquence to using references is that I can change the data within the function
}


int main(){
	//Say I have a variable 
	int clover=727225;
	//Now if I want to create a reference to the same location
	int &assembly_enthus=clover;
	//I can refer to clover by using:
	//clover and
	//by using &aassembly_enthus
	//A reference is similar to an alias
	//the problem I encounter now is that when I see the variable &assembly_enthus whether it is a reference or the original variable
	//References are mostly used when passing data to functions
	int llplover=746767;
	//This is pass by value
	likesToWriteLLCode(llplover);
	//When I have a ton of data it is better and much faster to pass by reference and the data is not going
	//to be copied
	//I will change lines 22-24 to line 28-30 to save memory for large data
}

/*void likesToWriteLLCode(int x){

}
*/


//Remember once I set a variable to a location in memory I cannot modify it


/*Example 2:
	void swap(int &x, int &y){
		int temporvar=x;
		x=y;
		y=temporvar;
	}

	int x = 0;
	int y=10;
	swap(x,y);
*/
