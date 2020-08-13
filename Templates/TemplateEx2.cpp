#include<iostream>
#include<string>
using namespace std;

//This function will now allow us to take any DT: string, float, int
template<typename T>
void Print(T value)
{
	std::cout<<value<<std::endl;
}


int main()
{
	Print(6);
	Print(2526568372);
	Print("2526 IS A C-LOVER");
	Print(6.43f);
}
