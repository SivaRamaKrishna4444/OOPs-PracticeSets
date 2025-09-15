#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter an Integer: ";
    cin>>num;

    if(num > 0){
        cout<<num<<" is positive"<<endl;
    }
    else if (num < 0){
        cout<<num<<" is negative"<<endl;
    }
    else if(num == 0){
        cout<<num<<" is zero(neither +ve or -ve)"<<endl;
    }

    return 0;
}