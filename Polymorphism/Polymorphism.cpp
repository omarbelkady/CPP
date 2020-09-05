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

	SubClass(std::string langsHeLoves, std::string nickName): MyClass(fuName, nickName){
		hisName = nickName;
		langs = langsHeLoves;
		FullName= fuName;
		cout<< "The Individual: "<<nickName<<" enjoys to write in: "<<langsHeLoves<<endl;
	}


	void likesC(){
		cout<<hisName<<" is coding in C right now and enjoys it tremendously .... "<<endl;
	}


};

int main()
{
	//Creating an instance with values set
	SubClass nelan("Alan Ngo", "C-Lover");
	nelan.likesC();
	return 0;
}
