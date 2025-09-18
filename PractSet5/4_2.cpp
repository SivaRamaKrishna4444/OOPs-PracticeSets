#include<iostream>
#include<string>
using namespace std;

class student{
    private:
        string name;
        int roll_no;
        int marks;
        float gpa;
    public:
    static int count;
        student(string name,int roll_no){
            this->name = name;
            this->roll_no = roll_no;
            cout<<endl<<"Student details has been created for "<<this->name<<endl;
        }

        void get_details(void){
            count = count + 1;
            cout<<"FUnction for getting details..... Call Count: "<<this->count<<endl;
            cout<<"Details: "<<endl<<"Name: "<<this->name<<" Roll_No: "<<this->roll_no<<endl;
        }

        void set_marks(int marks,float gpa){
            count = count + 1;
            cout<<"Function for Setting Marks... Call Count: "<<this->count<<endl;
            this->marks = marks;
            this->gpa = gpa;
        }

        void get_marks(void){
            count = count + 1;
            cout<<"FUnction for getitng marks.....Call Count: "<<this->count<<endl;
            cout<<"Marks of "<<this->name<<" : "<<this->marks<<endl;
            cout<<"GPA: "<<this->gpa<<endl;
        }
};

int student :: count = 0; 

int main(){
    student s1("Siva",84);
    s1.get_details();
    s1.set_marks(35,8);
    s1.get_marks();

    student s2("Rama",85);
    s2.get_details();
    s2.set_marks(40,6);
    s2.get_marks();

    cout<<endl<<"No.of Functions Called in Total: "<<s1.count<<endl;

    return 0;
}