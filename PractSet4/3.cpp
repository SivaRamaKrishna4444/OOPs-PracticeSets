#include<iostream>
using namespace std;

class Complex{
    private:
        float real;
        float imag;
    public:
        Complex(){
            this->real = 0;
            this->imag = 0;
        }
        Complex(float re){
            this->real = re;
            this->imag = 0;
        }
        Complex(float r,float i){
            this->real = r;
            this->imag = i;
        }

        void get_values(void){
            cout<<"Complex Number: "<<endl;
            cout<<"Real: "<<this->real<<" Imag: "<<this->imag;
            cout<<endl<<this->real<<" + "<<this->imag<<"i"<<endl;
        }
};

int main(){

    Complex c1;
    c1.get_values();

    Complex c2(4);
    c2.get_values();

    Complex c3(4,7);
    c3.get_values();

    return 0;
}