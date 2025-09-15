#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int lar_dig = 0;
    int i = num;
    do
    {
        int a = i%10;
        if(a>lar_dig){
            lar_dig = a;
        }
        i = i/10;

    } while (i!=0);
    
    cout<<"Largest Digit in the number is: "<<lar_dig;

    return 0;
}