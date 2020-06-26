#include<iostream>
using namespace std;

int factorialHunter(int x)
{
    if(x==0)
    {
        return 1;
    }
    
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*factorialHunter(x-1);
    }
}


int main()
{
    cout<<factorialHunter(8)<<endl;
    cout<<factorialHunter(0);
}
