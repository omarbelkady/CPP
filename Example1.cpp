#include<iostream>
using namespace std;

class Property
{
	public:
		//We want every object to have position
		float latit,longit;

		string Name;
		//We want every object to be mobile meaning be able to move
		void Mobile(float xsubi, float ysubi)
		{
			latit += xsubi;
			longit += ysubi;
		}
};

class Individual: public Property{
	public:
		//This is a pointer
		const char* Name;

		void PrintWhatHeEnjoysMost()
		{
			std:: cout<<Name<<" loves C"<<std::endl;
		}
};

int main()
{
	Individual nelan;
	nelan.Mobile(5,6);
	nelan.Name = "Nelan";
	nelan.latit = 6342;
	nelan.longit = 56837;
	nelan.PrintWhatHeEnjoysMost();
	//How to compute the size of Nelan
	std::cout<<sizeof(Individual)<<std::endl;
}
