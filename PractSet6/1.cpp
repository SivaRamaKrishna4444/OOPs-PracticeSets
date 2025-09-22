// frnd function remaining

#include<iostream>
using namespace std;

class Bank{
    private:
        int accountNumber;
        float balance;
    public:
    static float interestRate;
        Bank(int ac_no,float bal){
            this->accountNumber = ac_no;
            this->balance = bal;
            cout<<endl<<"New Account has been created with Ac_No: "<<this->accountNumber<<" Bal: "<<this->balance<<endl;
        }
        
        void deposit(float dep){
            if(dep<=0){
                cout<<dep<<" cannot be Deposited.Pls enter Valid Amount"<<endl;
            }
            else if(dep > 0){
                this->balance = this->balance + dep;
                cout<<endl<<dep<<" has been deposited successfully"<<endl;
                cout<<"Available Balance: "<<this->balance<<endl;
            }
        }

        void withdraw(float with){
            if(with<=0){
                cout<<with<<" cannot be withdrawn.Pls enter valid amt"<<endl;
            }
            else if((with>0)&&(this->balance>=with)){
                this->balance = this->balance - with;
                cout<<endl<<with<<" has been withdrawn successfullyy"<<endl;
                cout<<"Available Bal: "<<this->balance<<endl;
            }
        }

        void display(void){
            cout<<endl<<"Available Balance in your Account: "<<this->balance<<endl;
        }

        friend void applyInterest(Bank b1);
};

int main(){
    Bank b1(123,0);
    b1.deposit(10000);
    b1.withdraw(500);
    b1.display();

    return 0;
}