#include<iostream>

void reverseMyString(std::string& my_str){
	int n = my_str.length();

	for(int i=0;i<n/2;i++)
	{
		std::swap(my_str[i], my_str[n-i-1]);
	}
}

int main()
{
	std::string ordinaryStr = "\nrevol-c a si nalen";
	reverseMyString(ordinaryStr);
	std::cout<<ordinaryStr;
	return 0;
}
