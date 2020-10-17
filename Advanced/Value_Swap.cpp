#include<iostream>

void changingTheData(int csthreesevfanbo){
	csthreesevfanbo = 727225;
}

//Doing the same thing with pointers instead

void changingTheDataTwo(int *csthreesevfanbo){
	*csthreesevfanbo = 727225;
}

int main(){

	int csthreesevfanbo = 2667;
	changingTheData(csthreesevfanbo);
	std::cout<<csthreesevfanbo<<std::endl;
	//print 2667 but original csthreesevfanbo original value is still the same and not modified
	
	//Now this will print pascal since 2526 is a pascal enthusiast
	changingTheDataTwo(&csthreesevfanbo);
	std::cout<<"Comp short for Compilers is now changed to Pascal the best blue screen for 2526"<<std::endl;

	std::cout<<csthreesevfanbo<<std::endl;

	//Part two by placing the integer variable on the heap and passing in pintos 2526 fav os
	int *bluescreenlov = new int(746867);
	changingTheDataTwo(bluescreenlov);
	//Now the downside of using the new keyword is I am responsible for deallocating memory by using the delete keyword
	delete bluescreenlov;
	//USe the new keyword only when you want to keep the memory alive as long as you want 
	//
	//IF you want to use dynamic memory and not have to worry about freeing memory once you're done
	//this is when you use smart pointers

	return 0;
}

