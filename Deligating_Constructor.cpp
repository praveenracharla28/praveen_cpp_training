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
        name=adharNumber=panNumber="";
    }
    //Compile Time Polymorphism , constructor Overloading
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg):BankCustomer(){
        this->name=nameArg;
        this->adharNumber=adharNumberArg;
        this->panNumber=panNumberArg;
    }
     BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string phoneArg):BankCustomer(nameArg,adharNumberArg,panNumberArg){

        this->phoneNumber=phoneArg;
    }
    
    BankCustomer(string nameArg,string adharNumberArg,string panNumberArg,string phoneArg,string emailIdArg):BankCustomer(nameArg,adharNumberArg,panNumberArg,phoneArg){

        this->emailId=emailIdArg;
    }

    void printCustomerInfo(){
            //cout<<
    }
};
 
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    return 0;
}
