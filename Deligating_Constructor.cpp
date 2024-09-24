#include <iostream>
#include <string>

using namespace std;
class BankCustomer{
    private:
        string name;
        string adharNumber;
        string panNumber;
        string emailId;
        string phoneNumber;
    public:
    BankCustomer() {
        cout<<"BankCustomer()"<<endl;
        name=adharNumber=panNumber="";
       
    }
    //Compile Time Polymorphism , constructor Overloading
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg):BankCustomer(){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
        cout<<"BankCustomer(string nameArg,string adharNumberArg,string panNumberArg)"<<endl;
    }
     BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string phoneArg):BankCustomer(nameArg,adharNumberArg,panNumberArg){

        this->phoneNumber=phoneArg;
        cout<<"BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string phoneArg)"<<endl;
    }
    
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string phoneArg,string emailIdArg):BankCustomer(nameArg,adharNumberArg,panNumberArg,phoneArg){

        this->emailId=emailIdArg;
        cout<<"BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string phoneArg,string emailIdArg)"<<endl;
        
    }

    void printCustomerInfo(){
            //cout<<
    }
};
 
int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    
     BankCustomer obj("praveen","abcdef","panNumber113");
     
     
    BankCustomer *ptr=new BankCustomer("praveen","abcdef","panNumber113");
    
    return 0;
}
