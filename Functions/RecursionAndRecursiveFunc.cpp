#include<iostream>
using namespace std;

int recursive_func(int x, int y){
	//Create a base case to break my recursive fun to prevent infinite loop
	if(x==y){
		return x;
	}

	return x + recursive_func(x+1, y);
	cout<<"\n"<<std::endl;
}

//sum the nums between the x and y
int main(){
	int x=2,y=6;
	/*
	 * int the_sum=0;
	for(int i=x;i<=y;i++){
		the_sum+=i
	}
	std::cout<<the_sum<<std::endl;
	*/
	std::cout<<"The Sum is: "<<recursive_func(x,y);	
}
