#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<std::string> myVect{"NelanPintosLoves", "Practice C Dude",
		"Write Low Level All Day"};

	for(const auto &nelan: myVect){
		std::cout<<nelan<<std::endl;
	}

	return 0;
}
