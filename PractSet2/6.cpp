#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a num to rev its dig: ";
    cin>>num;

    int i = num;

    do{
        int a = i%10;
        cout<<a;
        i=i/10;
    } while (i!=0);
    

    return 0;
}