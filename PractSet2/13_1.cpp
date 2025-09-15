// For a 3-digit number

#include<iostream>
using namespace std;

int main(){
    int num;
    
    cout<<"Enter a 3-digit number: ";
    cin>>num;

    int i = num;
    int arm = 0;

    while(i!=0){
        int a = i%10;
        arm = arm+(a*a*a);
        i = i/10;
    }

    if(num == arm){
        cout<<num<<" is ARMstrong number";
    }
    else{
        cout<<"Not an ARmstrong number";
    }

    return 0;
}