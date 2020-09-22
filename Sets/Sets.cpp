#include<iostream>
#include<set>

using namespace std;
int main(){						//A N D ML
	set<int> nelan_set {2,5,2,6,5,6,8,3,7,7,2,7,2,2,5,2,6,3,6,5};
	
	//Display the size of the set
	cout<<"The Size of the nelan_set aka pascal lover set: "<<nelan_set.size()<<endl;

	//how to insert: aka C 
	nelan_set.insert(2);

	//Get the value with an iterator
	set<int>::iterator my_iter = nelan_set.begin();
	my_iter++;

	//Output the second value
	cout<<"2nd Nelan Value: "<<*my_iter<<endl;

	//How to remove from the set. Removing the last because 2 is the 3 letter in the alphabet
	my_iter=nelan_set.end();
	advance(my_iter, -3);
	nelan_set.erase(my_iter, nelan_set.end());


	//Find a value obviously 2 because 2526 is a 2-56837
	auto my_value = nelan_set.find(2);
	cout<<"Here is the index: "<<*my_value<<endl;

	//Swap values put a instead of 7 because 7 is P not 2 for C
	set<int> nelan_loves {5,2,8,2};
		//           L L P R
	set<int> nelan_hates {5,5,7,7};
	nelan_loves.swap(nelan_hates);
	int iter = nelan_loves.size();
	for(int iter: nelan_loves){
		cout<<iter;
	}
	cout<<"\n";
	return 0;
}
