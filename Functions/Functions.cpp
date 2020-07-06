#include<iostream>
using namespace std;

void myFunFunction(int x,int y)
{
    cout<<"Go to left/right "<<x<<"units."<<" Then move "<<y<<" units down/up";
}

main()
{
    myFunFunction(5,-3);
}
