#include<iostream>

using namespace std;
main()
{
    string favFood= "Poke";
    //Show me the location in memory of favFood
    cout<<&favFood<<endl;
    
    //Store the location in memory of favFood address and <------POINTER DECLARATION---->
    string *addrOfFavF = &favFood;
    
    cout<<addrOfFavF<<endl;//address
    cout<<*addrOfFavF<<endl;//dereferencing
    
    cout<< &addrOfFavF;//This is a different memory location than favFood
    return 0;
    
    //<-------- WHEN WE USE * IN declaration  WE ARE CREATING A POINTER ---->
    //If not in declaration we are dereferencing
    cout<< favFood<<endl;
}
