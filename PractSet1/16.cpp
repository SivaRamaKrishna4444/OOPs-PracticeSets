#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a num to sum its digit: ";
    cin>>num;

    int a = num;
    int dig;
    int sum_dig = 0;

    while(a!=0){
        dig = a%10;
        sum_dig = sum_dig+dig;
        a = a/10;
    }
    
    cout<<"Sum of Digits of "<<num<<" is "<<sum_dig;

    return 0;
}