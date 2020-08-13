#include<iostream>
using namespace std;
int main()
{
	int array[3]={1,2,3};
	std::cout<<"Before Replacing: "<<array[1]<<std::endl;
	array[1]=6;
	std::cout<<"After Replacing: "<<array[1]<<std::endl;
}
