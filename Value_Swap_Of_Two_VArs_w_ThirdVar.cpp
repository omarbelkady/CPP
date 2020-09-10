#include<iostream>
using namespace std;
int main()
{
	int num1 = 20;
	int num2= 15;

	int tempVar = num1;
	num1=num2;//assigning the value of num2 to num1
	//num1 now is equal to 15
	num2= tempVar;

	std::cout<<"num1(was 20):"<<num1<<" and num2(was 15) is now: "<<num2<<std::endl;


	return 0;
}
