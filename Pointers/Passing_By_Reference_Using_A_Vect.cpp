#include<iostream>
#include<vector>
using namespace std;

//The function below takes a vector
void passingByRef(std::vector<int> &my_Funny_Vector){
	my_Funny_Vector.push_back(256837);
	//When using references data changes made on the inside of the function body are 
	//reflected. When using value data changes made on the inside of the function body 
	//will not be reflected
	//Always pass by reference because when working with large sample sizes you do not 
	//want to pass by value because that will eat through your memory and make you 
	//a MAchine Code Enthusiast like Nelan
}
//Now inc
int main(){
	//Creating a funny vector
	         		       //               PINTOS          AND  MACHINE   CODE LOVER
	std::vector<int> my_Funny_Vector={63526, 47, 2, 746867, 727225, 263, 6224463, 2633, 56837};
	

	//passing my_Funny_Vector into my function
	passingByRef(my_Funny_Vector);

	//Iterating through the vector using what's known as a foreach loop in Java and C#
	for(int pintosloverelem : my_Funny_Vector){
		std::cout << pintosloverelem << " ";
	}
	return 0;
}
