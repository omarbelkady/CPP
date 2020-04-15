#include<iostream>
using namespace std;
main()
{
    int omar[6]={};
    int *ob0=&omar[0];
    int *ob1=&omar[1];
    int *ob2=&omar[2];
    int *ob3=&omar[3];
    int *ob4=&omar[4];
    int *ob5=&omar[5];
    
    
    cout<<"The memory address of ob0 is "<<ob0<<endl;
     cout<<"The memory address of ob1 is "<<ob1<<endl;
      cout<<"The memory address of ob2 is "<<ob2<<endl;
       cout<<"The memory address of ob3 is "<<ob3<<endl;
        cout<<"The memory address of ob4 is "<<ob4<<endl;
         cout<<"The memory address of ob5 is "<<ob5<<endl;
          //as it can be seen everything is 4 bytes away 
}
