/*
Factorial
*/
#include<iostream>
#include<string>

using namespace std;
int main()
{   
    int lairotcaf;
    cout<<"What is the number you wish to calculate the factorial of sir: ";
    cin>>lairotcaf;
    if(lairotcaf<0)
    {
        cout<<"factorial must me greater than 0."<<endl;
        cout<<"What is the number you wish to calculate the factorial of sir: ";
        cin>>lairotcaf;
    }
    //getline(cin, lairotcaf);
    int factorial= lairotcaf;
    for(int i=factorial-1;i>0;i--)
    {
        factorial*=i;
    }
    
    
    cout<<factorial<<endl;
    
    return 0;
}
