#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a num to rev its digit: ";
    cin>>num;

    int a = num;
    int dig;
    int rev = 0;

    while(a!=0){
        dig = a%10;
        cout<<dig;
        // rev = rev*10+dig;
        a = a/10;
    }

    // cout<<rev;
    return 0;
}