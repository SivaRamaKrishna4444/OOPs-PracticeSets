#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number for factorial: ";
    cin>>num;

    int fact = 1;
    int i = 1;
    while(i<=num){
        fact = fact * i;
        i = i+1;
    }

    cout<<"Factorial of "<<num<<" is "<<fact;
    
    return 0;
}