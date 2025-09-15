#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a num to find factorial: ";
    cin>>num;

    float fact = 1;

    for(int i = 1;i<=num;i++){
        fact=fact*i;
    }
    
    cout<<"Factorial of "<<num<<" is "<<fact;

    return 0;
}