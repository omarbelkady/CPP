## What is a Vector?

A vector is a list or in Java an Array List. This means the size is dynamic. In contrast to an array where the size is static meaning immutable.


## To declare a vector
```cpp
#include<iostream>
#include<vector>
using namespace std;
main()
{	//all caps means keyword in lowercase

	//How to DECLARE A VECTOR
	//VECTOR<Datatype> nameOfYourVector;

	//HOW TO DEFINE A VECTOR
	//VECTOR<Datatype> nameOfYourVector={16,19,23,16};
	
 	//data structure<datatype> nameOfDataStructure
	vector<int> omarsVector={13,37};
	
	//Remember vectors always know their size regardless unlike arrays.
	
	//To append Here's how
	
   	omarsVector.push_back(15);
   	//Now as soon as I run the 10th line of code it will reallocate more memory that is large
  	//enough to store the three integers
	
	//Now unlike arrays in the vector array if I do this it will automatically print my array size
	cout<<omarsVector.size()<<endl;
	
	//How to grab the last element of a vector
	cout<<"The last element in the vector is: "<<omarsVector[omarsVector.size()-1];
	
	
}
```
