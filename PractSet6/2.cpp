#include<iostream>
using namespace std;

class Student{
    private:
        string name;
        int rollNumber;
        int marks;
    public:
        Student(){
            this->name = "Unknown";
            this->rollNumber = 0;
            this->marks = 0;
        }
        Student(string name,int rollNumber){
            this->name = name;
            this->rollNumber = rollNumber;
            this->marks = 0;
        }
        Student(string name,int rollNumber,int marks){
            this->name = name;
            this->rollNumber = rollNumber;
            this->marks = marks;
        }

        void get_details(void){
            cout<<endl<<"Details of Student: "<<endl;
            cout<<"Name: "<<this->name<<endl;
            cout<<"Roll_Number: "<<this->rollNumber<<endl;
            cout<<"Marks: "<<this->marks<<endl;
        }
};
int main(){
    Student s1;
    s1.get_details();

    Student s2("Siva",01);
    s2.get_details();

    Student s3("Siva Rama",02,60);
    s3.get_details();

    return 0;
}