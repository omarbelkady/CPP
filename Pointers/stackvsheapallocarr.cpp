#include<iostream>
using namespace std;
int main(){
	//Stack allocated Array is an Array that exists on the stack in contrast to default
	//where it is stored in the Heap
	int arr_OfStack[5];

	//A stack allocated Array MUST have its size defined in compiled in contrast
	//to heap allocated array where size may be used in a var
	
	//Heap allocated array is an array that allocated memory in the heap
	//We use a pointer to address it
	int *arr_OfHeap= new int[5];

	//Always Remember to delete the Heap allocated Array after use to free memory
	delete[] arr_OfHeap;
}
