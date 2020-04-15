#include <iostream>
using namespace std;
main()
{
    int age=22;
    switch(age){
        
        case 11:
            cout<<"You are too young to go out, go home"<<endl;
            break;
        case 19:
            cout<<"You can go out"<<endl;
            break;
        case 22:
            cout<<"You can drink and drive legally in the US"<<endl;
            break;
        
        default:
            cout<<"Go to sleep"<<endl;
            break;   
        
    }
}
