#include<iostream>
using namespace std;

class Complex{
    private:
        float real;
        float imag;
    public:
        Complex(float real,float imag){
            this->real = real;
            this->imag = imag;
        }
        void display(void){
            cout<<"Complex: "<<this->real<<" + "<<this->imag<<"i"<<endl;
        }

        friend void addComplex(Complex c1,Complex c2);
};

void addComplex(Complex c1,Complex c2){
    cout<<"Sum of two Complex: "<<endl;
    cout<<c1.real<<"+"<<c1.imag<<"i"<<endl;
    cout<<c2.real<<"+"<<c2.imag<<"i"<<endl;
    cout<<c1.real+c2.real<<" + "<<c1.imag+c2.imag<<"i"<<endl; 
}

int main(){
    Complex c1(3,4);
    Complex c2(4,5);

    addComplex(c1,c2);
    
    return 0;
}