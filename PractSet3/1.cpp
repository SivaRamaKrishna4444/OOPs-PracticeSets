#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        int age;
    public:
        void set_value(string nm,int a){
            name = nm;
            age = a;
        }

        void get_value(void){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
int main(){
    Student s1;
    string name;
    int age;

    cout<<"Enter your Name: ";
    cin>>name;

    cout<<"Enter your age: ";
    cin>>age;

    s1.set_value(name,age);

    s1.get_value();
    
    return 0;
}