#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter no.of Natural Numbers: ";
    cin>>num;

    int sum = 0;
    for(int i = 0 ; i<=num;i++){
        sum = sum+i;
    }
    cout<<"Sum of "<<num<<" Natural Numbers: "<<sum;

    return 0;
}