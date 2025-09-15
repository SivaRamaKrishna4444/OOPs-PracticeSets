#include<iostream>
using namespace std;

int main(){
    int num1,num2;

    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;

    int gcd = 1;

    for(int i = 1;i<=num1;i++){
        if((num1%i == 0) && (num2%i == 0)){
            gcd = i;
        }
    }
    cout<<"GCD of "<<num1<<" and "<<num2<< " is: "<<gcd;

    return 0;

}