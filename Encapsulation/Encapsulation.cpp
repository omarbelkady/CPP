/*
 * Encapsulation means properties of a class should not be public they should be private
 * because they can change them as they
 * */

#include<iostream>
using namespace std;
class Car{
	private:
		string Name;
		string Color;
		double Price;
		bool IsBroken;

	public:	
	Car(string name, string color, double price){
		Name = name;
		Color = color;
		Price = price;
		IsBroken=false;
	}
	void getInfo(){}
	void crashCar(){
		std::cout<<Name<<" crashed"<<endl;
		IsBroken=true;
	}

	void repairCar(){
		std::cout<<Name<< " repaired"<<endl;
		IsBroken=false;
	}

	void move(){
		if(IsBroken){
			std::cout<<Name<< " is Broken"<<endl;
		}

		else
			cout<<Name<<" is Driving"<<endl;
	}


};
int main(){
	Car ford("Ford", "Blue", 60000);
	Car mercedes("Mercedes","Green", 650);
	mercedes.move();
	ford.move();
}
