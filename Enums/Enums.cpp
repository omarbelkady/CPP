#include<iostream>
using namespace std;

/* I want to group these into one
int alpha = 0;
int beta = 1;
int chi = 2;
*/

enum EnumExample{
	alpha, beta, chi
	//Setting alpha to 5 and not setting beta nor chi will automatically
	//set beta to 6 and chi to 7
};


int main(){
	//Instead of having my integer as my type
	//int  val = beta;
	
	//I will have an enum as a type
	EnumExample val = beta;
	if(val == beta){
		std::cout<<"two values are equal"<<std::endl;
	}
}
