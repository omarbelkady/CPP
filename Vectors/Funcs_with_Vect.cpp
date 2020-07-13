#include<iostream>
#include<vector>

using namespace std;

void print_my_vect(vector<int> &myVect)
{
    //if you want to change the variable inside of the function. 
    //Then all you have to do is pass by reference
    
    myVect.push_back(12);
    //to access the size of myVect we will use a method. Remember
    //unlike arrays, vectors always know their size
    
    
    for(int i=0;i<myVect.size();i++)
    {
        cout<<myVect[i]<<"\t";
    }
    cout<<"\n"<<endl;
}

int main()
{
    vector<int> data= {1,5,8};
    
    print_my_vect(data);
    print_my_vect(data);
    
    
       
}
