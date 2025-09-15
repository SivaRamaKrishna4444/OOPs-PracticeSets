#include<iostream>
using namespace std;

int main(){
    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;


    for(int num = 1;num <= 50;num++){
        if((num%3==0) && (num%5==0)){
            cout<<num<< " -- FizzBuzz"<<endl;
        }
        else if(num%3==0){
            cout<<num<<" -- Fizz"<<endl;
        }
        else if(num%5==0){
            cout<<num<< " -- Buzz"<<endl;
        }
    }
    
    
    return 0;
}