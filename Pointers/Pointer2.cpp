#include<iostream>
using namespace std;
int main()
{
    int fish=85;
    cout<<&fish<<endl;//this retrieves the memory location of fish
    
    //how to make a pointer
    int *fishpointer;
    fishpointer=&fish;//the fishpointer is equal to memory address of where the fish variable lives
    cout<<fishpointer;
}
