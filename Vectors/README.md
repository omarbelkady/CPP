## What is a Vector?

A vector is a list or in Java an Array List. This means the size is dynamic. In contrast to an array where the size is static meaning immutable.



### Vector functions 

#### Iterators

1. begin
	- returns the element at the beginning of the vector

2. end
	- returns the element at the end of the vector


#### Capacity

1. size
	- returns the size of the vector

2. max_size
	- returns the maximum size of the vector

3. resize
	- resize your vector

4. capacity
	- returns the size allocated for the vector

5. empty
	- checks to see if your vector is empty

6. reserve
	- requesting a change in capacity of your vector


#### Modifiers

1. assign
	- replace values at a specific index within your vector
2. push_back
	- populate your vector with a value at the end
3. pop_back
	- remove the element at the end of your end
4. insert
	- populate your vector with a value at the beginning
5. clear
	- clear your entire vector
6. erase
	- removes an element from your vector


#### More useful function(s)

1. swap
	- alternate two values within your vector
2. front
	- return to me the reference to the first item in the vector
3. back
	- return to me the reference to the last item in the vector
4. assign
	- give an old value a new value
5. insert
	- add a new vale before the specified the index
6. swap
	- alternate values between 2 vector
7. empty
	- boolean function to check whether the vecotr is empty or not
8. resize
	- resize the vector to the dimension you want


```cpp
#include<iostream>
#include<vector>
using namespace std;

vector<int> my_vector = {3,7,5,3,2};
cout<<my_vector.front();//first item in the vector is 3
cout<<my_vector.back();//last item in the vector is 2
my_vector.insert(2, 15);//now the vector is {3,7,2,5,3,2}
vector<int> fir_vect = {4,3,7};
vector<int> sec_vect = {544,3,26};
//vectors are now: fir_vect={544,3,26} sec_vect= {4,3,7}
fir_vector.empty();//returns false
fir_vector.resize(2);//now it is equal to {4,3}



```

### How To declare a vector
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
