#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        int age;
        string school;
    public:
        Student(string name,int age,string school){
            this->name = name;
            this->age = age;
            this->school = school;
        }
        void get_details(void){
            cout<<"Name: "<<this->name<<" Age: "<<this->age<<" School: "<<this->school<<endl;
        }
};

int main(){
    Student s1("Siva",18,"SCDS");
    s1.get_details();
    
    return 0;
}