#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter No.of Natural Numbers: ";
    cin>>num;

    cout<<"Sum of "<<num<<" Natural Numbers is "<<(num*(num+1))/2;

    return 0;
}