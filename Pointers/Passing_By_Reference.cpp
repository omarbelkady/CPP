#include<iostream>
using namespace std;

//The only difference now is I must change int x to int &x to make sure we are passing by reference to whatever
//argument we are passing in because we want them to point to the same area in memory
void passingByRef(int &x){
	x++;
	std::cout<<"The values are distinct FYI heres the proof"<<x<<std::endl;
}
//Now inc
int main(){
	int pintoslov=27736;
	passingByRef(pintoslov);
	std::cout<<pintoslov<<std::endl;
	return 0;
}
