#include<iostream>
#include<string>
using namespace std;

// this says that this class exists and in student frnd function it wont get error
class ac_details;

class student{
    private:
        string name;
        int age;
    public:
        student(string name,int age){
            this->name = name;
            this->age = age;
        }
        void get_details(void){
            cout<<"Name: "<<this->name<<" Age: "<<this->age<<endl;
        }

        friend void get_det(const student& s1,const ac_details& a1);
};

class ac_details{
    private:
        int ac_no;
        float bal;
    public:
        ac_details(int ac_no,float bal){
            this->ac_no = ac_no;
            this->bal = bal;
        }
        void get_ac_details(void){
            cout<<"Ac.No: "<<this->ac_no<<" Bal: "<<this->bal<<endl;
        }
        friend void get_det(const student& s1,const ac_details& a1);
};

void get_det(const student& s1,const ac_details& a1){
    cout<<"Name: "<<s1.name<<" Age: "<<s1.age<<" Ac_NO: "<<a1.ac_no<<" Bal: "<<a1.bal;
}

int main(){
    student s1("Siva",18);
    ac_details a1(1234,1000);

    get_det(s1,a1);

    return 0;
}