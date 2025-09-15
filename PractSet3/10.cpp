#include<iostream>
#include<string>
using namespace std;

class University{
    private:
        string name;
        int ranking;
    public:
        void set_values(string nm,int rank){
            name = nm;
            ranking = rank;
        }
        void get_values(void){
            cout<<"Name of University: "<<name<<endl;
            cout<<"Ranking: "<<ranking<<endl;
        }
};

int main(){
    University sai;

    sai.set_values("Sai University",0);
    sai.get_values();

    return 0;
}