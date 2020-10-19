#include<iostream>
using namespace std;

//The argument we are passing in is a pointer
void passingByRef(int *x){
	//when working with a pointer variable I must dereference it with the dereference operator(*) in my
	//function definition/body and putting a parenthesis for operator precedence
	(*x)++;
	std::cout<<"The values are distinct FYI heres the proof(inside function): "<<*x<<std::endl;
}
//Now inc
int main(){
	int pintoslov=27736;
	//Creating a pointer variable and assigning it the address of pintos lover(the best os for nelan)
	int *assembly_enthusiast=&pintoslov;
	passingByRef(assembly_enthusiast);
	std::cout<<"Within the main function body: "<<pintoslov<<" and tell 2526 to learn pintos, pascal or assembly because he loves llp!!"<<std::endl;
	return 0;
}
