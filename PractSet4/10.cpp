#include<iostream>
using namespace std;

int gcd(int n1,int n2){
    int gcd = 1;
    for(int i = 1;i<=n1;i++){
        if(n1%i == 0 && n2%i==0){
            gcd = i;
        }
    }
    return gcd;
}

class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction(){
            this->numerator = 0;
            this->denominator = 1;
        }
        Fraction(int num){
            this->numerator = num;
            this->denominator = 1;
        }
        Fraction(int num,int den){
            this->numerator = num;
            if(denominator==0){
                cout<<"Denominator Cannot be Zero";
            }
            else{
                this->denominator = den;
            }
        }

        void simplest(void){
            int n = gcd(this->numerator,this->denominator);
            numerator = numerator/n;
            denominator = denominator/n;

        }

        void print(void){
            if(this->denominator == 0){
                cout<<"Denominator cannot be zero";
            }
            else{
                cout<<this->numerator<<"/"<<this->denominator<<endl;
            }
        }
};

int main(){
    Fraction f1;
    f1.simplest();
    f1.print();

    Fraction f2(4);
    f2.simplest();
    f2.print();

    Fraction f3(4,12);
    f3.simplest();
    f3.print();

    return 0;
}