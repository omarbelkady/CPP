/*
        Classes & Objects
*/
#include<iostream>
using namespace std;
class myClass
{
    public: /* if you want main to access this class*/
        void simpleThing(){
            cout<<"Saying hello to the crowd"<<endl;
        }
    
    
    private:  /*if you do not want main to access this class*/
    
};

main()
{
    myClass myObj;//creating an object it is a must to access functions in the class
    myObj.simpleThing();
}
