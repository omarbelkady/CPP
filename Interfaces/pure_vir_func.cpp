//A pure virtual function is the same as an abstract method/interface
//Meaning it cannot have any body it can only be implemented and must be overriden
#include<iostream>
#include<string>

class Printing{
	public:
		//Pure virtual
		virtual std::string GetClassName() = 0;
};
//Indiv is now implementing the interface Printing. An interface in other pl means a class that has a pure 
//virtual function
class Indiv: public Printing{
	public:
		//The 0 makes it a pure vir func
		virtual std::string GetName() { return "Individual";}
		std::string GetClassName() override { return "Individual";}
};

class Player : public Indiv{
	private:
		std::string my_Name;
	public:
		Player(const std::string &name) : my_Name(name){}

		std::string GetName() override {
			return my_Name;
		}

		std::string GetClassName() override{
			return "Individual";
		}
};

void PrintMyName(Indiv * indiv)
{
	std::cout<<indiv ->GetName()<<std::endl;
}

//Making a function that will print all the classes we have
void Print(Printing *object)
{
	//We need a type that provides the GetClassName function
	//THIS IS EXACTLY WHAT AN INTERFACE IS
	std::cout<<object->GetClassName()<<std::endl;
}
int main()
{
	Player* e = new Player("Eric");
	//PrintMyName(e);

	//Player works fine because we did define the PrintMyName Function   
	Player* l = new Player("Louise");
	
	Print(e);//Entity Calling
	Print(l);//Player 
	std::cin.get();
} 

