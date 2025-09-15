#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;

    if(num1>num2){
        cout<<num1<<" is larger than "<<num2;
    }
    else if(num1<num2){
        cout<<num2<< " is larger than "<<num1;
    }
    else{
        cout<<"Both are equal "<<num1;
    }
    return 0;
}