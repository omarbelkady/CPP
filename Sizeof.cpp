#include<iostream>
using namespace std;
main()
{
    char c;
    float d;
    int a;
    double b;
    bool e;
    cout<<"An integer takes "<<sizeof(a)<<" bytes of memory"<<endl;
    cout<<"A double takes "<<sizeof(b)<< " bytes of memory"<<endl;
    cout<< "A character takes "<<sizeof(c)<<" bytes of memory"<<endl;
    cout<< " A float takes "<<sizeof(d)<<" bytes of memory"<<endl;
    cout<<" A boolean takes "<<sizeof(e)<< " bytes of memory"<<endl;
    double omar[10]={};
    cout<<"An array with 10 elements of type double takes "<<10*sizeof(double)<<" bytes of memory"<<endl;
}
