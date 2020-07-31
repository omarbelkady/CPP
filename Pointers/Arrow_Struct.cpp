#include<iostream>
#include<string>

struct my_Vector{
	float a,b,c;
};

int main(){
	int my_out = (int)&((my_Vector*)nullptr)->c;//prints 8 for 8 bytes
	int my_four = (int)&((my_Vector*)nullptr)->b;//prints 4 for 4 bytes
	std::cout<<my_out<<std::endl;
	int my_two = (int)&((my_Vector*)nullptr)->a;//prints 2 for 2 bytes
	std::cout<<"The output for the first element is: "<<my_two<<" because we are allocating 0  bytes so damn cool!!"<<std::endl;
	std::cout<<"The output is now for the 2nd element is: "<<my_four<<std::endl;
	std::cout<<"The output for the the 3rd element is: "<<my_out<<std::endl;
	std::cin.get();
}
