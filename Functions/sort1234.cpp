#include<iostream>
#include<algorithm>
using namespace std;
void out_of_arr(int b[]){
	for(int i=0;i<11;++i){
		cout<<b[i]<<" ";
	}
}
int main()
{
	int x[11]={1,5,7,8,6,3,2,4,9,0,10};
	cout<<"Before sorting the array he is what it looks like: ";
	out_of_arr(x);
	cout<<"\n"<<endl;
	//Prebuilt sort method in C++ takes two arguments: arrayname,arrayname+size
	sort(x,x+11);
	cout<<"After sorting the array here is what it looks like: ";
	out_of_arr(x);
	cout<<"Done"<<endl;
	return 0;
}

