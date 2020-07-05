#include<iostream>
#include<vector>
using namespace std;
main()
{
    vector<int>ramoVector={6,7,8};
    ramoVector.push_back(9);
    ramoVector.push_back(10);
    ramoVector.push_back(11);
    cout<<ramoVector[ramoVector.size()-1]<<endl;
    ramoVector.pop_back();
    for(int i=0;i<(ramoVector.size()-1);i++)
    {
        cout<<","<<ramoVector[i];
    }
    cout<<"\n";
    cout<<ramoVector.front()<<endl;//returns the the first element
    cout<<ramoVector.back()<<endl;//returns the the last element
    cout<<ramoVector.data();//returns the address in memory of ramoVector
}
