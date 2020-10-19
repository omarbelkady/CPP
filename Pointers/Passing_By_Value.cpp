#include<iostream>
using namespace std;


void passingByVal(int x){
	x++;
	std::cout<< x << std::endl;
	std::cout<<"The values are distinct FYI heres the proof\n"<<std::endl;
	std::cout<< &x << std::endl;
}

int main(){
	int assemblov=27736;
	passingByVal(assemblov);
	std::cout<<assemblov<<std::endl;
	std::cout<<"The address of assembly lover: ";
	std::cout<<&assemblov<<std::endl;
	return 0;
}
