#include<iostream>
using namespace std;

class Account{
    private:
        int accountNumber;
        float balance;
    public:
        void set_values(int ac_no,float bal){
            accountNumber = ac_no;
            balance = bal;
        }
        void get_values(void){
            cout<<"Ac.No: "<<accountNumber<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
};

int main(){
    Account a1;

    a1.set_values(123123,5000.00);
    a1.get_values();
    
    return 0;
}