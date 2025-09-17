#include<iostream>
using namespace std;

class bank{
    private:
        int ac_no;
        float bal;
    public:
        bank(int ac_no,float bal){
            this->ac_no = ac_no;
            this->bal = bal;
            cout<<"Bank Account has been created"<<endl;
        }
        void get_details(void){
            cout<<"Ac Num: "<<this->ac_no<<" Bal: "<<this->bal<<endl;
        }

        ~bank(){
            cout<<"Bank Account has been removed with "<<endl;
            get_details();
        }
};

int main(){
    bank b1(1,300.00);
    b1.get_details();
    
    bank b2(2,400.00);
    b2.get_details();

    return 0;
}