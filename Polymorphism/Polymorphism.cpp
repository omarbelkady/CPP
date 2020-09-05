#include<iostream>
#include<list>
using namespace std;

class MyClass{
	private:
		int salaryFigure;
		list<std::string> ProgLangs63526Loves;
	protected:
		std::string hisName;
		std::string langs;
	
	public:
		std::string FullName;
		//Default Constructor
		MyClass(){
			std::cout<<"Hello This Will Be Called Automatically Because It is The Default Constructor Of The Base Class."<<endl;
		}

		//Constructor	
		MyClass(std::string fuName, std::string nickName){
			FullName=fuName;
			hisName=nickName;
			salaryFigure=0;
		}

		void Info(){
			cout<<"Name: "<< FullName<<endl;
			cout<<"NickName: "<< hisName<<endl;
			cout<<"Salary: "<<salaryFigure<<endl;
		}

		void IncSalary(){
			salaryFigure++;
		}

		void decSalary(){
			if(salaryFigure > 100000)
				salaryFigure--;
		}

		void OutputTheLangs6352656837(std::string langs){
			ProgLangs63526Loves.push_back(langs);
		}
};

class SubClass : public MyClass{
public:
	string langs;
	string FullName;
	SubClass(std::string fuName="Alan Ngo", std::string nickName="C-56837"):MyClass(fuName, nickName){
		
	}
	SubClass(std::string fuName="Alan 2-56837", std::string nickName="PintosLer", std::string langs="C,C, AND C"){
		langs=langs;
		cout<<"The Individual: "<<fuName<<" aka "<<nickName<<" enjoys to write in: "<< langs<<endl;
	}


	void likesC(){
		cout<<hisName<<" is coding in C right now and enjoys it tremendously .... "<<endl;
	}


};

int main()
{
	//Creating an instance with values set
	SubClass nelan("Alan Ngo", "Low-Level Lover", "C, C, C");
	return 0;
}
