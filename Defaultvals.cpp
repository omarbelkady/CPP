#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int volume(int l=6, int w=7, int h=2);
int main()
{
    cout<<volume(9,7);//9*7*2
}
int volume(int l, int w, int h)
{
    return l*w*h;
}
