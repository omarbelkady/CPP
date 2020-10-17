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
