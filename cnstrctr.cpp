#include<iostream>
#include<string>
using namespace std;
class myClass
{
	public: 
	    void setName(string d)
	    {
	        myClass();
	        {
                		cout<< "This will be printed automatically "; 
                    }//C++ will now know that this is a constructor
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
     myClass chelseasobject;
     chelseasobject.setName("Chelsea Downing");
     cout<<chelseasobject.getName();
}
