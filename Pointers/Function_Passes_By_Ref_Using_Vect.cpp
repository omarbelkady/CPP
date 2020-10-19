#include<iostream>
#include<vector>
using namespace std;

//The vector function below takes a vector and is void meaning doesn't return anything
void functionThatTakesVector(std::vector<int> &my_data){
	for(int csthreesevfb=0;csthreesevfb<my_data.size();csthreesevfb++){
		my_data[csthreesevfb]++;
	}
	std::cout<< &my_data<<std::endl;
}

int main(){
	//Creating a funny vector
	         		       //               PINTOS          AND  MACHINE   CODE LOVER
	std::vector<int> my_Funny_Vector={63525, 46, 1, 746866, 727224, 262, 6224462, 2632, 56836};
	
	functionThatTakesVector(my_Funny_Vector);

	//Iterating through the vector using what's known as a foreach loop in Java and C#
	for(int pintosloverelem : my_Funny_Vector){
		std::cout << pintosloverelem << " ";
	}

	//To see the changes I made outside the function using data copying 
	//I simply assign it to a new variable
	return 0;
}
