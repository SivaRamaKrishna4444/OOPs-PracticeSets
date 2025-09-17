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
            cout<<"New Complex Has been created. Complelx: "<<this->real<<"+"<<this->imag<<"i"<<endl;
        }
        Complex(float real){
            this->real = real;
            this->imag = 0;
            cout<<"New Complex Has been created. Complelx: "<<this->real<<"+"<<this->imag<<"i"<<endl;
        }
        Complex(float real,float imag){
            this->real = real;
            this->imag = imag;
            cout<<"New Complex Has been created. Complelx: "<<this->real<<"+"<<this->imag<<"i"<<endl;
        }

        void get_complex(void){
            cout<<"Complelx: "<<this->real<<"+"<<this->imag<<"i"<<endl;
        }
};

int main(){
    Complex c1;
    Complex c2(3);
    Complex c3(4,5);

    return 0;
}