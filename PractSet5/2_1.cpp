#include<iostream>
#include<string>
using namespace std;

class details{
    private:
        string name;
        int age;
    public:
        details(){
            this->name = "Unknown";
            this->age = 18;
        }
        void get_details(void){
            cout<<"Name: "<<this->name<<"  Age: "<<this->age<<endl;
        }

};

int main(){
    details d1;
    d1.get_details();

    return 0;
}