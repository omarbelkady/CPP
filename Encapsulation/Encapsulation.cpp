#include<iostream>
using namespace std;

class Encapsulation{
	private:
		int Nelan;
	public:
		void setTo(int assm)
		{
			Nelan = assm;
		}

		int getVal()
		{
			return Nelan;
		}
};

int main()
{
	Encapsulation alanLovesC;
	alanLovesC.setTo(634256837);
	cout<<"\n"<<endl;
	cout<<alanLovesC.getVal()<<endl;
	return 0;
}
