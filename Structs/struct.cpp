#include<iostream>
using namespace std;

struct User{
    //We put the dataMembers
    string FName;
    string LName;
    int age;
    string interests;
    string status;
    int get_SSN(){
        return SSN;
    }
    
    //To set a private data field
    private:
        int SSN=3;//setting a default value for the private field
};

int main()
{
    User omar;
    omar.FName = "Omar";
    omar.LName = "Belkady";
    omar.age = 26;
    omar.interests = "Machine_Learning,Gaming,PUBG,COD,C++,C#,Python";
    omar.status = "Silver";
    cout<<"My name is: "<<omar.FName<<" "<<omar.LName<<" and I am "<<omar.age<<" years old, and I love: "<<omar.interests<<endl;
    cout<<"\n  To get the status of the private field call the get_function name: "+omar.get_SSN()<<endl;
    return 0;
}
