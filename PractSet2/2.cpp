#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter no.of Even Numbers: ";
    cin>>num;

    int count = 1;
    while(count<=num){
        cout<<2*count<<" ";
        count = count+1;
    }

    return 0;
}