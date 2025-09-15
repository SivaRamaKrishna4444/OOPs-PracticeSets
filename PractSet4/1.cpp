#include<iostream>
using namespace std;

class Rectangle{
    private:
        float length;
        float breadth;
    public:
        Rectangle(float l,float b){
            this->length = l;
            this->breadth = b;
        }
        void get_values(void){
            cout<<"Details of Rect: "<<endl;
            cout<<"Length: "<<this->length<<endl;
            cout<<"Breadth: "<<this->breadth<<endl;
        }
        void get_area(void){
            cout<<"Area of Rectangle: "<<this->length*this->breadth<<endl;
        }
};

int main(){
    Rectangle r1(10,15);

    r1.get_values();
    r1.get_area();

    return 0;
}