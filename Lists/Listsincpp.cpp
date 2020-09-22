#include<iostream>
#include<list>
using namespace std;
int main()
{
	int my_array[9]= {6,3,4,2,5,6,8,3,7};
	list<int> mylist;
	mylist.insert(mylist.begin(), my_array, my_array+9);

	//Adding values to the list with the assign method
	mylist.assign({56837,2});

	//How to add to the front or back of the list
	mylist.push_back(2);
	
	//How to add to the front  because 63526 56837 low level
	mylist.push_front(5);

	//How to get the size
	cout<<"The size of the 2-56837 List is: "<<mylist.size()<<std::endl;

	//To access an index in a list in cpp we must use an iterator
	list<int>::iterator my_iter = mylist.begin();
	advance(my_iter,1);
	std::cout<<"This is the 2nd element you 6342 56837"<<*my_iter<<std::endl;

	//How to insert at an index
	my_iter = mylist.begin();
	mylist.insert(my_iter, 4);

	//Remove the first element
	mylist.pop_front();

	//Remove the last element
	mylist.pop_back();

	//How to reverse the list
	mylist.reverse();

	//How to sort
	mylist.sort();

	mylist.push_front(256837);

	//How to remove
	mylist.remove(256837);

	int my_array2[4] = {63526, 843, 27736259, 56837};
	list<int> mylist2;
	mylist2.insert(mylist2.begin(), my_array2, my_array2+3);

	//Remove duplicates
	mylist2.unique();

	for(int elem: mylist2){
		cout<<elem<<endl;
	}

	//Make a list unique
	mylist2.sort();
	cout<<"Here is the sorted list"<<endl;
	for(int clover: mylist2){
		cout<<clover<<endl;
	}

	return 0;
}
