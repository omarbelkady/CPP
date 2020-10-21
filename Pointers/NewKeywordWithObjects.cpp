#include<iostream>
#include<string>
using namespace std;

class PintosLover{
	public:
		std::string nameOfPascalLover;
};

int main(){
	//Whenever I see the new keyword this is a pointer ...REMEMBER (746867 LOVER)==CS375 FANBOY
	int *x = new int(746867);
	std::cout<<"The pointer x "<< x << " points to "<< &x<<std::endl;
	//Part two after using the new keyword
	//I must free the memory
	delete x;
	//Memory is occupied as long as I haven't deleted it yet
	//This is used to make data live way beyond the scope it is defined in
	//This will exist until we call delete even if it outside of the function
	//I am woring on
	
	//Instead of using new Pintos Lover I use a pointer which is a different type
	PintosLover *nelan=new PintosLover();

	//Since I used a pointer I must use parenthesis and change the below code to line 28
	//and use the dereference operator
	//nelan.name="The Low Level Lover Is Nelan";
	

	//I change the below code to instead of using the dot and parenthesis I simply use the 
	//arrow operator
//	(*nelan).name="The Low Level Lover Is Nelan";

	
	nelan->nameOfPascalLover="The Low Level Lover Is Nelan";

	std::cout<<nelan->nameOfPascalLover<<std::endl;

	delete nelan;

	return 0;
}
