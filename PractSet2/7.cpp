#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number to check for prime: ";
    cin>>num;

    int prime = 1;
    for(int i = 2;i<=num/2;i++){
        if(num%i == 0){
            prime = 0;
            break;
        }
    }

    if(prime == 1){
        cout<<num<<" is Prime";
    }
    else{
        cout<<"Not a Prime";
    }

    return 0;
}