#include<iostream>
using namespace std;

class Car{
    private:
        string brand;
        float price;
    public:
        Car(string b,float pr){
            this->brand = b;
            this->price = pr;
            cout<<"New Obj has been created"<<endl;
        }

        void get_details(void){
            cout<<"Car Details: "<<endl<<"Brand: "<<this->brand<<" Price: "<<this->price<<endl;
        }

        ~Car(){
            cout<<"Obj has been destroyed"<<endl;
        }
};

int main(){
    Car c1("Hyundai",699999.00);
    c1.get_details();

    return 0;
}