#include<iostream>
using namespace std;

int main(){

    for(int i = 1;i<=20;i++){
        if(i%2==0){
            cout<<i<<" -- Even"<<endl;
        }
        else{
            cout<<i<<" -- Odd"<<endl;
        }
    }
    return 0;
}