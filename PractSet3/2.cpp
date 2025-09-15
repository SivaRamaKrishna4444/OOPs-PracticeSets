#include<iostream>
using namespace std;

class BankAccount{
    private:
        float balance;
    
    public:
        void setBalance(float bl){
            balance = bl;
        }

        void getBalance(void){
            cout<<"Current Balance: "<<balance;
        }
};

int main(){

    BankAccount b1;
    
    float bal;
    cout<<"Enter the balance to Update: ";
    cin>>bal;

    if(bal>=0){
        b1.setBalance(bal); 
        b1.getBalance();
    }
    else{
        cout<<"Balance Cannot Be -ve";
    }

    return 0;
}