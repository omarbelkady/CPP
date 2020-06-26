#include<iostream>
using namespace std;
	void printNumber(int x)
	{
		 cout<<x<<endl;
	}
	//To overload keep the same name and have different number of parameters or different input type 
	void printNumber(float x)
	{
		 cout<<x<<endl;
	}


int main()
{
	int a=98;
	float b=37.05919;
	
	
	
	printNumber(a);
	printNumber(b);
	
}
