#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter base: ";
    cin>>a;

    cout<<"Enter Exponent: ";
    cin>>b;

    float res = 1;

    int i = 1;
    while(i <= b){
        res = res*a;
        i = i + 1;
    }
    cout<<"a^b = "<<res;

    return 0;
}