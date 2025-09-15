#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a num to chheck prime: ";
    cin>>num;
     int flag = 1;
    for(int i = 2;i<=num/2;i++){
        if(num%i == 0){
            flag = 0;
            break;
        }    
    }

    if(flag == 1){
        cout<<num<< " is prime";
    }
    else if(flag == 0){
        cout<<"Not a Prime";
    }

    return 0;
}