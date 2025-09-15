#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int dig_count = 0;
    int i = num;
    while(i!=0){
        dig_count = dig_count+1;
        i=i/10;
    }

    cout<<"Number of Digits: "<<dig_count<<endl;

    int j = num;
    float arm = 0;
    while(j!=0){
        int a = j%10;
        arm = arm + pow(a,dig_count);
        j = j/10;
    }

    if(num == arm){
        cout<<num<<" is ARMstrong number"<<endl;
    }
    else{
        cout<<"NOT an ARMstrong";
    }

    return 0;
}