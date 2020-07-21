#include<iostream>
using namespace std;
void print_my_array(int my_arr[], int the_size)
{
    for(int i=0;i<the_size;i++)
    {
        cout<<my_arr[i]<<"\t";
    }
    cout<<endl;
}

main()
{
    const int SIZE= 7;
    int my_dumb_array[SIZE]={};
    //Say I initialize an array with 5 elements and I give it a size of 150 then the remaining 145 elements
    //are 0.
  
    
    for(int i=0;i<SIZE;i++)
    {
        if(cin>>my_dumb_array[i])
        {
            
        }
        
        else{
            //this will break when we enter a different datatype e.g.
            
            break;
        }
        
    }
    for(int l=0;l<SIZE;l++)
    {
        cout<<my_dumb_array[l]<<endl;
    }
    //print_my_array(my_dumb_array,SIZE);
    return 0;
    
}
