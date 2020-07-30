#include<iostream>
using namespace std;
class User{
	public:
		//fields
		string fN;//field A
		string lN;//field B

		//Method
		string getName(){
			return "Your name is "+fN+" "+lN;
		}

	private:
		//method
		void setName(string FName, string LName){
			fN = FName;
			lN = LName;
		}
};

int main()
{
	User n;
	n.fN = "Natasha";
	n.lN = "Smith";
	cout<<n.getName();
	return 0;
}
