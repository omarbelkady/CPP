#include<iostream>
#include<string>

using namespace std;

struct my_Vector{
	float a,b,c;
	float Nelan_And_C;
};

int main(){
	int my_out = (int)&((my_Vector*)nullptr)->c;//prints 8 for 8 bytes
	int my_four = (int)&((my_Vector*)nullptr)->b;//prints 4 for 4 bytes
	cout<<my_out<<endl;
	int my_two = (int)&((my_Vector*)nullptr)->a;//prints 2 for 2 bytes
	float my_fst_float=(int)&((my_Vector*)nullptr)->Nelan_And_C;
	cout<<"The output for the first element is: "<<my_two<<" because we are allocating 0  bytes so damn cool!!"<<endl;
	cout<<"The output is now for the 2nd element is: "<<my_four<<endl;
	cout<<"The output for the the 3rd element is: "<<my_out<<endl;
	cout<<"Alan Loves C Value: "<<my_fst_float<<endl;
}
