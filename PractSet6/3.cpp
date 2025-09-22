#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        float salary;
    public:
    static int employeeCount;
        Employee(int id,float salary){
            this->id = id;
            this->salary = salary;
            cout<<"New Employee has been created"<<endl;
            employeeCount = employeeCount + 1;
        }

        void get_details(void){
            cout<<endl<<"Details of Emplolyee "<<this->employeeCount<<": "<<endl;
            cout<<"ID: "<<this->id<<" Salary: "<<this->salary<<endl;
        }
};

int Employee :: employeeCount = 0;

int main(){
    Employee e1(1,10000.00);
    e1.get_details();

    Employee e2(2,20000.00);
    e2.get_details();

    Employee e3(3,30000.00);
    e3.get_details();

    return 0;
}