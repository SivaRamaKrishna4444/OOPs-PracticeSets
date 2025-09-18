#include<iostream>
#include<string>
using namespace std;

class bank_acc{
    private:
        string name;
        int ac_no;
        float bal;
    public:
        static int count;

        bank_acc(string name,int ac_no,float bal){
            this->name = name;
            this->ac_no = ac_no;
            this->bal = bal;

            count = count+1;

            cout<<"New Account has been created for "<<this->name<<endl<<"Count :"<<count<<endl;
        }

        void get_details(void){
            cout<<"Account Deatils: "<<endl;
            cout<<"Count of Acc: "<<this->count<<endl;
            cout<<"Name: "<<this->name<<" Acc_Num: "<<this->ac_no<<" Bal: "<<this->bal<<endl;
        }
};

int bank_acc ::  count = 0;

int main(){
    bank_acc b1("Siva",123,300.00);
    b1.get_details();

    bank_acc b2("Rama",12,400.00);
    bank_acc b3("Krishna",12,500);

    return 0;
}