#include<iostream>
#include<string>
using namespace std;

class Employee{
    private:
        string name;
        int id;
        float salary;
    public:
        Employee(string nm,int i){
            this->name = nm;
            this->id = i;
            this->salary = 0;
        }
        Employee(string nm,int id,float sal){
            this->name = nm;
            this->id = id;
            this->salary = sal;
        }

        void get_details(void){
            cout<<endl<<"Employee Details: "<<endl;
            cout<<"Name: "<<this->name<<endl;
            cout<<"ID: "<<this->id<<endl;
            cout<<"Salary: "<<this->salary<<endl;
        }
};

int main(){
    Employee e1("Siva",1);
    e1.get_details();

    Employee e2("Rama",2,399);
    e2.get_details();
    
    return 0;
}