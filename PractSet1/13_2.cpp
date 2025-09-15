#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a num to check for prime: ";
    cin>>num;
    
    int flag = 1;

    for(int i = 2 ; i*i <= num ; i++){
        if(num%i==0){
            flag = 0;
        }
    }

    if(flag == 1){
        cout<<num<< " is prime";
    }
    else{
        cout<<"Not a PRIME";
    }
    return 0;
}