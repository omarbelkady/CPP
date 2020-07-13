#include<iostream>
#include<string>

using namespace std;

int main()
{
    int choice;
    
    
    do{
        cout<<"0. Quit"<<endl<< "1. Play Game\n";
        cin>>choice;
        
        switch(choice)
        {
            case 0:
                cout<<"Goodbye B***"<<endl;
                break;
            case 1:
                cout<<"Let\'s play dude!"<<endl;
                break;
        }
    }
    
    while(choice != 0);
    
    
}
