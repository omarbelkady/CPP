#include<iostream>
#include<array>
int main()
{	//Template argument type followed by the size
	std::array<int, 9> my_collection;
	
	//Check the size of the array
	std::cout<<my_collection.size();
	
	//For each in C++
	for(int j : my_collection)
	{
		std::cout<<my_collection[j]<<std::endl;
		j++;
	}
}
