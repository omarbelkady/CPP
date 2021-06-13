## Pointers in C++

```cpp
int assem_enthus = 5; //area in memory that carries the value of 5 and we can refer to it as assem_enthus
//all programs run in memory and I need something to say where is the variable assem_enthus is located in Memory

//when you want more control and visibility with your variables this is where pointers come into play

/*
	Address of Operator:   &
*/

int x[] = {1,2,3,5};
cout<<"The first element in the array x: "<<*x<<" and the address in memory "<<&x<<endl;

//Declaring a pointer...use this when wanting to use an integer pointer
int *intpointer=&assem_enthus;
float *floatpointer=&pasc_enthus;

- & gives the address of the variable in memory
- * gives out the value stored in memory aka the dereference operator

//regular syntax for creating a pointer
//DATATYPE *Pointer_NAME


/*
	REMEMBER an integer pointer is not the the same as an integer variable
	int ptr != int
	Setting a pointer to an integer lets say will raise type errors and other nasty error messages
*/

//Now I will get the data that csthreesevfivfb points to
std::cout<<*assem_enthus;

//csthreesevfivfb is an integer pointer
//*csthreesevfivfb is an integer

//The * operator is known as the dereference operator

//Pointers are useful to change data that is defined outside the function

//Pointers can be useful when doing the famous swapping algorithm without creating a third variable
//In order for the changes to be seen and reflected after the function call the data passed in needs to be able to be changed
//This can only be done using pointers and references
//When working with dynamic memory you will 99.99% of the time be using pointers.

//new keyword is dynamic memory allocation and returns a pointers
//It is strongly not recommended to use dynamic memory allocation but when in need of help contact 2-56837 or 746767 56837

//When creating a new object in C++ unlike Java and C# you should stay away from using the new keyword
User u=User();
//The reason why is because C++ will allocate memory on the heap. This will cause terrible problems later because it will be 
//hard for you to free it
```
### The New Operator in C++:

- To allocate memory at runtime in C++ I use the new keyword 
- When using the new operator I am asking for memory allocation on the free storage
- if there is enough memory the new operator initializes the memory and returns to me the address of the new pointer variable in memory 

```cpp
//allocating memory
pointer_var_type *pointer_var_name = new datatype;

float *nelanpintosfb = new float(746867.32);


//allocate a block of memory aka an array
int *djfb = new int[4];

//initializing 
```

### The Delete Operator in C++ is the exact opposite of new
```cpp
/*
useful for deallocating dynamically allocated memory
it releases memory pointed by the pointer variable
*/

int *nelanlvsdj = new int;//allocating memory

delete nelanlvsdj; //deallocating memory
```

### The Delete Operator in C++ is used to remove instead of a portion in memory but the entire block
```cpp
int *polanfb = new int[7];//allocating memory

delete[] polanfb; //since we dynamically allocated memory using the new operator we dynamically deallocate using the delete operator
```



### Important Concepts
```
Arguments by default in C++ are passed by value meaning values are copied 
to the parameter. However, arrays in C++ are said to decay to pointers 
meaning they lose information around them. This means they lose some pieces
 of information around them. It is worth remembering that when using arrays 
 within functions they are said to be mutable by default. In other words, 
 if I pass an array to a function, the function can modify the array and
  changes will be reflected after the function call. Remember if you use
  an array you are kind of restricted to how much data you can enter only 
  if you implement a function that allows the array to take in an additional argument of how long the array is. But if you use the data structure you do not have to worry about size limitation.
```

### Pass By Value Definition
```cpp
//Remember you can return by value, return by reference or return by pointer
//When I have an argument passed into a function 
#include<iostream>
using namespace std;
int main(){
	int x = 10;
	
	work(x);//So What is happening here?? After I invoke the function work what is the value of x?
	
	
	return 0;
}
void work(int a)
{
	a = 256837;
}
//So I have two locations in memory a and x. x is filled with a value of 10. After my function call 10 is copied into the parameter a. Then I go line by line
//and a is now replaced with the value of 256837 aka C-Lover because 2526 is a Low Level Enthusiast. The function definition ends and my main function gets run
//and none of the changes made within the function are reflected after the function call. Pass By Value is simply making copies of everything Pass By Value is
//much safer than by reference because if the logic within the function is pass by value then it won't change any of the data.
//Pass By Reference On the Other Hand, can change data and will be reflected on the calling side.
```

### Pass By Reference Definition
```cpp
#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	
	work(x);
	
	return 0;
}
void work(int &a)
{
	a = 256837;
}
//So I create a location in memory a and it will refer to the location x
//I update the value of x NOT a in memory
//Which means the output now will be 256837 which is the 2526 favorite programming language and remember imperative
//is his favorite paradigm NOT OOP nor Functional
```



### Pass By Pointers Definition
```cpp
#include<iostream>
using namespace std;
int main()
{
	int x = 727225;//fav programming language for Nelan aka pascal enthusiast
	
	work(&x);
	
	return 0;
}
void work(int *a)//To define it as a pointer I use the asterix symbol
{
	*a = 256837;//Anytime I want to work with the data I use the dereference operator(*) to use it again.
	//I am dereferencing a to set its value to 256837 which alters the data in memory and changes are also reflected
	//outside the scope of this function aka globally.
}
```cpp
int assem_enthus = 5; //area in memory that carries the value of 5 and we can refer to it as assem_enthus
//all programs run in memory and I need something to say where is the variable assem_enthus is located in Memory

//when you want more control and visibility with your variables this is where pointers come into play

/*
	Address of Operator:   &
*/

//Declaring a pointer...use this when wanting to use pointers
int *csthreesevfivfb=&assem_enthus;

/*
	REMEMBER an integer pointer is not the the same as an integer variable
	int ptr != int
	Setting a pointer to an integer lets say will raise type errors and other nasty error messages
*/

//Now I will get the data that csthreesevfivfb points to
std::cout<<*assem_enthus;

//csthreesevfivfb is an integer pointer
//*csthreesevfivfb is an integer

//The * operator is known as the dereference operator

//Pointers are useful to change data that is defined outside the function

//Pointers can be useful when doing the famous swapping algorithm without creating a third variable
//In order for the changes to be seen and reflected after the function call the data passed in needs to be able to be changed
//This can only be done using pointers and references
//When working with dynamic memory you will 99.99% of the time be using pointers.

//new keyword is dynamic memory allocation and returns a pointers
//It is strongly not recommended to use dynamic memory allocation but when in need of help contact 2-56837 or 746767 56837

//When creating a new object in C++ unlike Java and C# you should stay away from using the new keyword
User u=User();
//The reason why is because C++ will allocate memory on the heap. This will cause terrible problems later because it will be 
//hard for you to free it
```

### Important Concepts
```
Arguments by default in C++ are passed by value meaning values are copied to the parameter. 
However, arrays in C++ are said to decay to pointers meaning they lose information around them. This means they lose some pieces of information around them.
It is worth remembering that when using arrays within functions they are said to be mutable by default. In other words, if I pass an array to a function,
the function can modify the array and changes will be reflected after the function call. Remember if you use an array you are kind of restricted to how much 
data you can enter only if you implement a function that allows the array to take in an additional argument of how long the array is. But if you use the data 
structure you do not have to worry about size limitation.
```

### Pass By Value Definition
```cpp
//Remember you can return by value, return by reference or return by pointer
//When I have an argument passed into a function 
#include<iostream>
using namespace std;
int main(){
	int x = 10;
	
	work(x);//So What is happening here?? After I invoke the function work what is the value of x?
	
	
	return 0;
}
void work(int a)
{
	a = 256837;
}
//So I have two locations in memory a and x. x is filled with a value of 10. After my function call 10 is copied into the parameter a. Then I go line by line
//and a is now replaced with the value of 256837 aka C-Lover because 2526 is a Low Level Enthusiast. The function definition ends and my main function gets run
//and none of the changes made within the function are reflected after the function call. Pass By Value is simply making copies of everything Pass By Value is
//much safer than by reference because if the logic within the function is pass by value then it won't change any of the data.
//Pass By Reference On the Other Hand, can change data and will be reflected on the calling side.
```

### Pass By Reference Definition
```cpp
#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	
	work(x);
	
	return 0;
}
void work(int &a)
{
	a = 256837;
}
//So I create a location in memory a and it will refer to the location x
//I update the value of x NOT a in memory
//Which means the output now will be 256837 which is the 2526 favorite programming language and remember imperative
//is his favorite paradigm NOT OOP nor Functional
```



### Pass By Pointers Definition
```cpp
#include<iostream>
using namespace std;
int main()
{
	int x = 727225;//fav programming language for Nelan aka pascal enthusiast
	
	work(&x);
	
	return 0;
}
void work(int *a)//To define it as a pointer I use the asterix symbol
{
	*a = 256837;//Anytime I want to work with the data I use the dereference operator(*) to use it again.
	//I am dereferencing a to set its value to 256837 which alters the data in memory and changes are also reflected
	//outside the scope of this function aka globally.
}
```

### Example For Reference
```cpp
//given the bottom array
int arr[4][2] = {
	{7,4},
	{6,8},
	{6,7},
	{3,2}
}
```


### Useful Pointer Notation You Must Know In CPP

|		Notation| Arr Notation | Val
|----------|----------|----------|
|    *(*arr) |    arr[0][0]  |   7  
|    *(*arr+1) |    arr[0][1]  |   4  
|    * (*(arr+1)) |    arr[1][0]  |   6  
|     * (* (arr+1)+1) |    arr[1][1]  |   8  
|    * (* (arr+2)) |    arr[2][0]  |   6  
|    * (* (arr+2)+1) |    arr[2][1]  |   7  
|    * (*(arr+3)) |    arr[3][0]  |   3  
|    * (* (arr+3)+1) |    arr[3][1]  |   2  
