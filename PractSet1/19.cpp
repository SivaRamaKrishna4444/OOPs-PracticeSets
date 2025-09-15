#include<iostream>
using namespace std;

int main(){
    float p,t,r;
    float si;

    cout<<"Enter Principle Amount: ";
    cin>>p;
    cout<<"Enter Rate of Interest: ";
    cin>>r;
    cout<<"Enter Time(in years): ";
    cin>>t;

    si = (p*t*r)/100;
    
    cout<<"Simple Interest: "<<si;

    return 0;
}