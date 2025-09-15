#include<iostream>
using namespace std;

float pi = 3.14159265;

class Circle{
    private:
        float radius;
    public:
        void set_value(float r){
            radius = r;
        }
        void get_values(void){
            cout<<"Radius of Circle: "<<radius<<endl;
        }
        void getArea(void){
            cout<<"Area of Circle: "<<pi*radius*radius<<endl;
        }

};

int main(){
    Circle c1;
    
    float rad;
    cout<<"Enter Radius of Circle: ";
    cin>>rad;

    c1.set_value(rad);
    c1.get_values();
    c1.getArea();
    
    return 0;
}