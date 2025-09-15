#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
        string brand;
        string model;
    public:
        void set_values(string br,string mo){
            brand = br;
            model = mo;
        }
        void get_values(void){
            cout<<"Brand: "<<brand<<endl;
            cout<<"Model: "<<model;
        }
};

int main(){
    Car c[5];

    for(int i = 0;i < 5;i++){
        string b;
        string m;

        cout<<"Enter Deatils of Car "<<i+1<<":"<<endl;
        cout<<"Brand: ";
        cin>>b;
        
        cout<<"Model: ";
        cin>>m;

        c[i].set_values(b,m);
    }
    for(int i = 0 ; i<5;i++){
        cout<<endl<<"Deatils of Car "<<i+1<<": "<<endl;
        c[i].get_values();
    }
    return 0;
}