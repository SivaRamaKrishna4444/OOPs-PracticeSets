#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a num(to check palindrome): ";
    cin>>num;

    int a = num;
    int rev = 0;
    while(a!=0){
        int dig = a%10;
        rev = rev*10 + dig;
        a = a/10;
    }

    if(rev == num){
        cout<<endl<<num<<" is palindrome"<<endl;
    }
    else{
        cout<<endl<<"Not a Palindrome"<<endl;
    }

    return 0;
}