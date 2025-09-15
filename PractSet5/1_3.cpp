#include<iostream>
using namespace std;

class Rectangle{
    private:
        float length;
        float breadth;
    public:
        Rectangle(float length,float breadth){
            this->length = length;
            this->breadth = breadth;
        }
        void get_details(void){
            cout<<"Length: "<<this->length<<" Breadth: "<<this->breadth<<endl;
        }

        friend void get_area(Rectangle r1);
};

void get_area(Rectangle r1){
    cout<<"Area of Rectangle: "<<r1.length*r1.breadth<<endl;
}

int main(){
    Rectangle r1(7,12);
    r1.get_details();
    get_area(r1);

    return 0;
}