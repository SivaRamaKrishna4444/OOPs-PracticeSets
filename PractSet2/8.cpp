#include<iostream>
using namespace std;

int main(){
    cout<<"Odd Numbers from 1 to 50 are: "<<endl;
    int i = 1;
    while(i<=50){
        if(i%2!=0){
            cout<<i<<" ";
        }
        i = i + 1;
    }
    return 0;
}