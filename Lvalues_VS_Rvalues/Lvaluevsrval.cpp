#include<iostream>
using namespace std;

void PrintTheName(const std::string& myName)
{
	std::cout<<"[lvaldude]" <<myName<<std::endl;
}

void PrintTheName(const std::string&& myName)
{
	std::cout<<"[rvaldude]" <<myName<<std::endl;
}



int GetVal(){
	//GetVal returns An RValue aka temporary value
	//can also be a result of function
	//GetVal is a temporary location and has no 
	return 2568372;
}

//lvalue reference
int& MyRVal(){
	//I must provide a storage for my val
	static int val = 786756837;
	return val;
}

//Function to be called with an LValue or RValue
void SetMyVal968N56837(int val){


}
//Lvalues are vars taht have storage backing 
//Rvalues are temp vals
//Lvalues refs can only take lvalues unless they are const
//Rvalue refs can only take temp rvalues

int main()
{
	//Rvalue
	int i =GetVal();
	//GetVal() = 6;
	//lvalue
	int num = 7;
	//lvalue
	SetMyVal968N56837(num);
	//rvalue
	SetMyVal968N56837(5);
	//Note: I cannot take an lvalue reference from an rvalue
	//I can only take an lvalue reference of an rvalue
	std::string fName = "Nelan";
	std::string lName = "isAClover";
	std::string fullN = fName+lName;
	PrintTheName(fullN);
	PrintTheName(fName+lName);
}

