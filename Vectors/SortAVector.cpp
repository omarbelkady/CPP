#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	vector<int> myVect{1,59,12,1,6,7,4,6,3,4,2,0};
	sort(myVect.begin(),myVect.end());
	for(int i=0;i<myVect.size();i++)
	{
		std::cout<<myVect[i]<<" ";
	}

	return 0;
}
