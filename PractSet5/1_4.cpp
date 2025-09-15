#include<iostream>
using namespace std;

class Y;

class X{
    private:
        int x;
    public:
        X(int x){
            this->x = x;
        }
        void get_value(void){
            cout<<"Value of X: "<<this->x<<endl;
        }

        friend void swap(X& x1,Y& y1);
};

class Y{
    private:
        int y;
    public:
        Y(int y){
            this->y = y;
        }
        void get_value(void){
            cout<<"Value of Y: "<<this->y<<endl;
        }

        friend void swap(X& x1,Y& y1);
};

void swap(X& x1,Y& y1){
    int temp = x1.x;
    x1.x = y1.y;
    y1.y = temp;
}

int main(){
    X x1(4);
    Y y1(12);
    x1.get_value();
    y1.get_value();

    cout<<"After Swapping: "<<endl;
    swap(x1,y1);
    x1.get_value();
    y1.get_value();

    return 0;
}