#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a numebr to check if it is palindrome: ";
    cin>>num;
    
    int rev_num = 0;

    for(int i = num;i!=0;i=i/10){
        int a = i%10;
        rev_num = rev_num*10+a;
    }

    if(num == rev_num){
        cout<<num<<" is Paindrome";
    }
    else{
        cout<<"Not a PALINDROME";
    }
    
    return 0;
}