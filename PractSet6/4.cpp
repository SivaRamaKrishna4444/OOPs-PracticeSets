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
        void get_details(void){
            cout<<"Length: "<<this->length;
            cout<<"  Breadth: "<<this->breadth;
        }
        
        friend void compareArea(Rectangle r1,Rectangle r2);
};

void compareArea(Rectangle r1,Rectangle r2){
    float a1 = r1.length*r1.breadth;
    float a2 = r2.length*r2.breadth;

    cout<<"Area of R1: "<<a1<<endl;
    cout<<"Area of R2: "<<a2<<endl;

    if(a1>a2){
        cout<<"R1 > R2"<<endl;
    }
    else if(a1<a2){
        cout<<"R1 < R2"<<endl;
    }
    else if(a1==a2){
        cout<<"R1 = R2"<<endl;
    }
}

int main(){
    Rectangle r1(3,4);
    Rectangle r2(4,5);

    compareArea(r1,r2);

    return 0;
}