#include<iostream> 
using namespace std;
main()
{
int millennial[2][3]={{6,7,8},{18,24,27}};
for(int row=0;row<2;row++)
{
	for(int column=0;column<3;column++)
	{
		cout<<millennial[row][column]<<" ";
	}
    cout<<endl;
}
}
