#include<iostream>
#include<string>
using namespace std;

// this says that this class exists and in student frnd function it wont get error
class science;

class maths{
    private:
        float marks;
        char grade;
    public:
        maths(float marks,char grade){
            this->marks = marks;
            this->grade = grade;
        }
        void get_details(void){
            cout<<"MAths: "<<this->marks<<" Grade: "<<this->grade<<endl;
        }

        friend void add_det(const maths& m1,const science& s1);
};

class science{
    private:
        float marks;
        char grade;
    public:
        science(float marks,char grade){
            this->marks = marks;
            this->grade = grade;
        }
        void get_ac_details(void){
            cout<<"Marks: "<<this->marks<<" Grade: "<<this->grade<<endl;
        }
        friend void add_det(const maths& m1,const science& s1);
};

void add_det(const maths& m1,const science& s1){
    cout<<"Sum of both marks: "<<m1.marks+s1.marks<<endl;
}

int main(){
    maths m1(99,'A');
    science s1(89,'B');

    add_det(m1,s1);

    return 0;
}