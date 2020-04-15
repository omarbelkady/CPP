#include<iostream>
#include<string>
using namespace std;
class myClass
{
	public:
	    //This is the wrong way to do it
    //i want to create a function that can change name at any given moment
	    void setName(string d)
	    {
	        name=d;
	    }
	    string getName(){
	        return name;
	    }
	   
	private:
	    string name;

};

int main()
{
     //Creating an Object
     myClass omarsobject;
     omarsobject.setName("Omar Belkady");
     cout<<omarsobject.getName()<<endl;
     //Creating a 2nd object
     myClass tracyobject;
     tracyobject.setName("Tracy Jenkins");
     cout<<tracyobject.getName();


}
