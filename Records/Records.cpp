#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		string fullName;
		int idNum;
		string major;
		bool likesToRead;
		char firstInitial;
};

int main(){
	Person Nel;
	Nel.fullName= "2526 646";
	Nel.idNum= 634256837;
	cout<<"His name is "<<Nel.fullName<<" and he has an id: "<<Nel.idNum<<endl;
	//Updating the value
	Nel.idNum=256837;
	cout<<"Updated Val:"<<Nel.idNum<<endl;
	return 0;
}
