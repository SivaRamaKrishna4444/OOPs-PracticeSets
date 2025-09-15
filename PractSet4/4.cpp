#include<iostream>
using namespace std;

class BankAccount{
    private:
        int accountNumber;
        float balance;
    public:
    BankAccount(){
        this->accountNumber = 0;
        this->balance = 0;
    }
    BankAccount(int ac_no){
        this->accountNumber = ac_no;
        this->balance = 0;
    }
    BankAccount(int ac_num,float bal){
        this->accountNumber = ac_num;
        this->balance = bal;
    }

    void get_details(void){
        cout<<"Account Details: "<<endl;
        cout<<"Number: "<<this->accountNumber<<endl;
        cout<<"Balance: "<<this->balance<<endl;
    }

};

int main(){
    BankAccount b1;
    b1.get_details();

    BankAccount b2(123);
    b2.get_details();

    BankAccount b3(123,5000.00);
    b3.get_details();

    return 0;
}