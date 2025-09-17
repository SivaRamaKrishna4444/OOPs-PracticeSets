#include<iostream>
#include<string>
using namespace std;

class university{
    private:
        string univ_name;
        string location;
    public:
        university(){
            this->univ_name = "Sai University";
            this->location = "Chennai";
        }
        university(string name){
            this->univ_name = name;
            this->location = "Hyderabad";
        }
        university(string name,string loc){
            this->univ_name = name;
            this->location = loc;
        }
        void get_details(){
            cout<<"Name: "<<this->univ_name<<endl;
            cout<<"Location: "<<this->location<<endl;
        }
};


int main(){
    university u1;
    u1.get_details();

    university u2("UOH");
    u2.get_details();
    
    university u3("RVRJC","AP");
    u3.get_details();

    return 0;
}