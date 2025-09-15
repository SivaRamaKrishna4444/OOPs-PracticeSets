#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        int age;
        float marks;
    public:
        Student(){
            name = "Unknown";
            age = 0;
            marks = 0;
        }
        Student(string nm,int a,float m){
            this->name = nm;
            this->age = a;
            this->marks = m;
        }

        void get_details(void){
            cout<<"Student Details: "<<endl;
            cout<<"Name: "<<this->name<<endl;
            cout<<"Age: " <<this->age<<endl;
            cout<<"Marks: "<<this->marks<<endl;
        }
};

int main(){
    Student s1;
    s1.get_details();

    Student s2("Siva",18,7.5);
    s2.get_details();
    
    return 0;
}