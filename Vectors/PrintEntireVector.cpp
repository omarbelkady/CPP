#include<iostream>
#include<vector>
using namespace std;



//To share memory with the vector you do this void showMeMyVectorPlease(vector<int> &omarsVector) 
//This is referred to as Pass By Reference. Use Pass By Reference when you have a big vector
//Because passing by value will consume a lot of memory

//Creating a function that doesn't return anything aka void
//and takes a vector of type int as input
void showMeMyVectorPlease(vector<int> omarsVector)
{
    for(int i=0;i<omarsVector.size();i++)
    {
        cout<<omarsVector[i]<<"\t";
    }
}


main()
{
    //How to pass a vector into a function
    vector<int> omarsVector={1994,1995,2014};
    showMeMyVectorPlease(omarsVector);
    
}
