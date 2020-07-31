#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    
        int x;
        
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
        
        ~ScopedNelanPtr(){
            delete my_obj;
        }
    
        //Overloading the arrow operator
        Person* operator->(){
            return my_obj;
        }
};


int main()
{
    ScopedNelanPtr indiv = new Person();
    //indiv.Output(); ==> This errors because it says no member named Output
    indiv->Output();
}
