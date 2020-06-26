#include<iostream>
using namespace std;
int main()
{
    /* Function Prototyping*/
    void passByValue(int x);
    void passByReference(int *x);
    /*End of Function Prototyping*/
    int leonard=13;
    int josephine=14;
    passByValue(leonard);
    passByReference(&josephine);
    cout<<"This is pass By Value:"<<leonard<<endl;
    cout<<"This is pass by Reference: "<<josephine<<endl;
}

void passByValue(int x)
{
    x=99;
}


void passByReference(int *x)
{
    *x=66;
}
