#include<iostream>
using namespace std;

void printFunc(int numOfTimes)
{
	if(numOfTimes<1)
		return;
	else{
		std::cout<<numOfTimes<<": "<<"2526 56837 27736259 & 829567 79438!"<<endl;
		printFunc(numOfTimes-1);
		return;
	}
}

int main()
{
	printFunc(2);
	return 0;
}
