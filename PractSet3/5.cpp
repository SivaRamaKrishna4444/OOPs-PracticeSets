#include<iostream>
using namespace std;

class Employee{
    private:
        float id;
        float salary;
    public:
        void set_values(float i,float s){
            id = i;
            salary = s;
        }
        void get_values(void){
            cout<<endl<<"Employee "<<id<<" Details: ";
            cout<<endl<<"ID: "<<id<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};
int main(){
    Employee e1;
    Employee e2;
    Employee e3;

    e1.set_values(001,49999);
    e1.get_values();

    e2.set_values(002,79999);
    e2.get_values();

    e3.set_values(003,99999);
    e3.get_values();
    
    return 0;
}