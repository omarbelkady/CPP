#include<iostream>
using namespace std;

class Bravo{
        string status = "Platinum";
    
    public:
        
        string fN;
        string lN;
        //Getter
        string get_status(){
            return status;
        }
        
        //setter
        void set_status(string status){
            
            if(status=="Gold"||status=="Silver"||status=="Bronze")
            {    
                this->status=status;
                //status up top= argument passed in
            }
            else
            {
                this->status="No status man!";
            }
        }
        
        
        //Creating the default constructor
        Bravo()
        {
            cout<<"Object created By the default const!"<<endl;
        }
        
        //Creating the constructor
        Bravo(string fN, string lN, string status)
        {
            this->fN=fN;
            this->lN=lN;
            this->status=status;
            cout<<"Object created!"<<endl;
        }
        
        //Creating the destructor
        ~Bravo()
        {
            cout<<"Object Destroyed\n";
        }
};
int main()
{
    Bravo mike("Mike","Jones","platinum");
    mike.get_status();
    
    Bravo tracy;
    tracy.set_status("Bronze");
    tracy.get_status();
    
    Bravo harry;
    harry.set_status("Blank");
    cout<<"The status of Harry is: "+harry.get_status()<<endl;
}
