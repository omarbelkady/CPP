#include<iostream>
using namespace std;


class Base
{
    public:
    void appear()
    {
        cout << "Calling the Base class Appear Method\n";
    }
};

class Derived:public Base
{
    public:
    void appear()//overrode the appear method of the base class
    {
        cout << "Calling the overriden appear method in the Derived Class\n";
    }
};

int main()
{
    Base* b;       //Instantiating the Base class pointer
    Derived d;     //Instantiating the Derived class object
    b = &d;
    b->appear();    //Pointing to the appear method in my class not the derived the class
    
    
    d.appear();
}
