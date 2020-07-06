#include<iostream>
#include<cmath>
using namespace std;

//return type  identifier parenthesis
double expBuilder(double, int);//This is a declaration
//                param1, param2



double expBuilder(double myBase, int myExponent){//This is a function definintion
    double output=1;
    for(int i=0; i<myExponent;i++)
    {
        output*=myBase;
    }
    return output;
}

int main()
{
    int myBase, myExponent;
    cout<<"What is your Base?: ";
    cin>>myBase;
    
    cout<<"What is the number you want to raise your base to?: ";
    cin>>myExponent;
    //                             args1, arg2
    double myExpBuilder=expBuilder(myBase, myExponent);
    cout<<myExpBuilder;
}
