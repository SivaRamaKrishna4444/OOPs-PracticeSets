#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    cout<<"Enter Number 3: ";
    cin>>num3;

    if((num1>num2) && (num1>num3)){
        cout<<num1<<" is larger";
    }
    else if((num2>num1) && (num2>num3)){
        cout<<num2<< " is larger";
    }
    else if((num3>num1) && (num3>num2)){
        cout<<num3<<"is larger";
    }

    else if((num1>num2) && (num1==num3)){
        cout<<"Number 1 and Number 3 are same and larger than Number 2"<<endl;
    }
    else if((num2>num1) && (num2==num3)){
         cout<<"Number 2 and Number 3 are same and larger than Number 1"<<endl;
    }
    else if((num1>num3) && (num1==num2)){
         cout<<"Number 1 and Number 2 are same and larger than Number 3"<<endl;
    }
    else if((num1==num2) && (num1==num3)){
        cout<<"All 3 Numbers are equal";
    }
    return 0;
}