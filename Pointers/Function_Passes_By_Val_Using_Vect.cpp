#include<iostream>
#include<vector>
using namespace std;

//The vector function below takes a vector AND REMEMBER THE RETURN TYPE A VECTOR
std::vector<int> vectorThatTakesVector(std::vector<int> my_data){
	for(int csthreesevfb=0;csthreesevfb<my_data.size();csthreesevfb++){
		my_data[csthreesevfb]++;
	}
	return my_data;
}

int main(){
	//Creating a funny vector
	         		       //               PINTOS          AND  MACHINE   CODE LOVER
	std::vector<int> my_Funny_Vector={63526, 47, 2, 746867, 727225, 263, 6224463, 2633, 56837};
	

	//passing my_Funny_Vector into my function
	std::vector<int> nelanlovesllp=vectorThatTakesVector(my_Funny_Vector);

	//Iterating through the vector using what's known as a foreach loop in Java and C#
	for(int pintosloverelem : nelanlovesllp){
		std::cout << pintosloverelem << " ";
	}

	//To see the changes I made outside the function using data copying 
	//I simply assign it to a new variable
	return 0;
}
