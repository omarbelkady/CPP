#include<iostream>
using namespace std;

class ThisPointer{
	private:
		int nelanLovesPointers;
	public:
		void setNelan(int a)
		{
			//this keyword used to retrieve objects hidden by local var
			this->nelanLovesPointers=a;
		}

		void output(){ 
			std::cout<<"a is equal to: "<<nelanLovesPointers<<std::endl;
		}
};

int main()
{
	ThisPointer nelanFavTopic;
	int j = 256837;
	nelanFavTopic.setNelan(j);
	nelanFavTopic.output();
	return 0;
}

