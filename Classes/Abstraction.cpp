#include<iostream>
using namespace std;

class howToUseAbstractionInCPP{
	private:
		int u;
		int v;
	public:
		void setThis(int alpha, int beta)
		{
			u=alpha;
			v=beta;
		}

		void output()
		{
			cout<<"The output of u according to 6342 56837= "<<u<<endl;
			cout<<"The output of v according to 2-56837 = "<<v<<endl;
		}
};
int main()
{
	howToUseAbstractionInCPP myObject;
	myObject.setThis(63, 42);
	myObject.output();
	return 0;
}
