#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
        string brand;
        string model;
        float price; 
    public:
        Car(string br){
            this->brand = br;
            this->model = "Unknown";
            this->price = 0;
        }
        Car(string br,string md){
            this->brand = br;
            this->model = md;
            this->price = 0;
        }
        Car(string br,string md,float pr){
            this->brand = br;
            this->model = md;
            this->price = pr;
        }

        void print_details(void){
            cout<<endl<<"Car Details: "<<endl;
            cout<<"Brand: "<<this->brand<<endl;
            cout<<"Model: "<<this->model<<endl;
            cout<<"Price: "<<this->price<<endl;
        }
};

int main(){
    
    Car c1("Hyundai");
    c1.print_details();

    Car c2("Jeep","Longitude");
    c2.print_details();

    Car c3("Maruti Suzuki","Swift",399999.00);
    c3.print_details();

    return 0;
}