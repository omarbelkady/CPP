//Default Arguments
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int volume(int l, int w, int h);
int main()
{
    cout<<volume(91,92,19);
}
int volume(int l, int w, int h)
{
    return l*w*h;
}
