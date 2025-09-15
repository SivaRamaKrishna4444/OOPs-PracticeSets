#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    cout<<"Enter 1st Number: ";
    cin>>num1;

    cout<<"Enter 2nd Number: ";
    cin>>num2;
    
    int i = 1;
    int gcd = 1;
    while(i<=num1){
        if((num1%i == 0) &&(num2%i==0)){
            gcd = i;
        }
        i = i + 1;
    }

    cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<gcd;

    return 0;
}