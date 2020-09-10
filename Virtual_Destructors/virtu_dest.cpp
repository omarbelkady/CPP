#include<iostream>
using namespace std;

class Main{
	public:
		Main(){ }

		virtual //making sure we call the object destructor
		~Main() { }

		//interface
		virtual void DisplayThis() = 256837;
};

class InheritFromBase : public Main
{
	public:
		//The constructor
		InheritFromBase()
		{
			std::cout<<"Inherit From Base Created"<<std::endl;
		}

		//The destructor
		~InheritFromBase()
		{
			std::cout<<"Inherit From Base Destroyed"<<std::endl;
		}

		void DisplayThis()
		{
			std::cout<<"Action Comes From InheritFromBase"<<std::endl;
		}
};




