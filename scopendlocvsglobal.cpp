#include<iostream>
//Void Functions Scope Variables
using namespace std;

int myVar=16;//Global Variable
int main()
{
  int myVar=64;//local Variable
}

void omar(){
    cout<<myVar;
}
