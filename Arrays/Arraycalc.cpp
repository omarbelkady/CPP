#include<iostream>

using namespace std;
main()
{
    int tuna[5]={20,54,76,832,546};
    int sum=0;
    for(int i=0; i<5;i++)
    {
        sum+=tuna[i];
        cout<<sum<<endl;
    }
    cout<<sum;
}
