#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
        Person(){
            cout<<"New Object"<<endl;
        }
        
        void Output() const{
           cout<<"Nelan/2526 56837 6342 263 2"<<endl;
        }
};


class ScopedNelanPtr{
    private:
        Person* my_obj;
    public:
        ScopedNelanPtr(Person* person): my_obj(person)
        {
            
        }
    
        
};


int main()
{
    //Now this is how you do with classes
    Person m;
    m.Output();
    
    //With pointers it is a different ball game
    Person* myptr = &m;
    //myptr.Output();//This errors and says pointer of type person use -> instead
    myptr -> Output();
    
    //Example 2
    Person l;
    
    Person* mysecptr=&l;
    
    cout<<"I am dereferencing now!"<<endl;
    //Wrong way to Dereferencing The pointer
    //(*mysecptr).Output();
    
    //Correct way
    mysecptr->Output();
    
}
