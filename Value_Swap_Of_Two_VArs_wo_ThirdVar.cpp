#include<iostream>
using namespace std;

int main()
{

	int alpha = 256837;
	int beta = 2526;
	
	alpha+=beta;//259363
	beta= alpha - beta;//256837
	alpha -= beta;//254311
	std::cout<<"Alpha was 256837 and now is:"<<alpha<<" and beta was 2526 and is now:"<<beta<<std::endl;

	return 0;
}
