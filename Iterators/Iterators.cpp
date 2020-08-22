#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;
int main()
{
	//Iterators are used to iterate through a collection of a data structures
	//I can traverse part of it, all of it, backwards iteration or forwards iteration
	std::vector<int> vals = {2526,56837,63422632};

	//How to print out all the vals logically speaking
	/*
	for(int i=0;i<vals.size();i++)
	{
		cout<<vals[i];
	}
	*/

	//Using the range based for loop
	//for(datatypeiterator nameOfElement : collectionName)
	/*
	for(int value : vals)
		std::cout<<value<<" ";

	The normal iterator will read the values and we add at what condition does it terminate
	for(std::vector<int>::iterator iter = vals.begin(); 
			iter != vals.end(); 
			iter++)
	{
		How to obttain the value of an iterator by using a dereference operator 
		 * actually you dereference a pointer
		cout<<*iter<<endl;
	}

	*/
	using ScoreMap = std::unordered_map<std::string, int>;
	ScoreMap myMap;
	myMap["Belkady"]=6627;
	myMap["Nelan"]=256837;
	myMap["Alan"]=27736259;
	myMap["Low-Level"]=2526;

	/*I cannot iterate through a map using a range based for loop*/
	for(ScoreMap::const_iterator iter = myMap.begin();
		iter != myMap.end(); iter++)
	{
		/*
		//How to access the map key
		auto& myKey = iter->first;
		//How to Access The map Value
		auto& myVal = iter -> second;
		std::cout<<myKey<< ": "<< myVal<<endl;
		*/
	}

	/*WAY #2*/
	/*
	for(auto key_val : myMap)
	{		
		auto& myKey = key_val.first;
		auto& myVal = key_val.second;
		cout<<myKey<< " " <<myVal <<std::endl;
	}*/

	//WAY #3
	for(auto [key,val] : myMap)
		cout<<key<<" :  " <<val<<std::endl;

	return 0;
}

	

