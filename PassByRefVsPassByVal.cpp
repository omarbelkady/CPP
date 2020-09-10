#include<iostream>
using namespace std;
int main(){
	void passByValue(int x);

	void passByReference(int *x);

	int clover = 256837;

	int lowlevelproglover= 63526;

	passByValue(clover);

	passByReference(&lowlevelproglover);

	std::cout<<"This is Pass By Value: "<<clover<<std::endl;
	std::cout<<"This is Pass By Reference: "<<lowlevelproglover<<std::endl;
	return 0;
}

void passByValue(int x){
	x=27736259;
}

void passByReference(int *x){
	*x = 2;
}
