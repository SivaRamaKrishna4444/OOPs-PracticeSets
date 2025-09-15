#include<iostream>
using namespace std;

class Rectangle{
    private:
        float length;
        float width;
    public:
        void set_values(float l,float w){
            length = l;
            width = w;
        }
        void get_values(void){
            cout<<endl<<"Length: "<<length<<endl;
            cout<<"Width: "<<width<<endl;

            cout<<"Area of Rect: "<<length<<"*"<<width<<": "<<length*width;
        }
};
int main(){
    Rectangle r1;

    float len,wid;

    cout<<"Enter Length of Rectangle: ";
    cin>>len;

    cout<<"Enter Width of Rectangle: ";
    cin>>wid;

    r1.set_values(len,wid);
    r1.get_values();
    
    return 0;
}