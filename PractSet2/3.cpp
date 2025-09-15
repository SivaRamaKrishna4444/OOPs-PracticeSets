#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a Number to give the table: ";
    cin>>num;
    
    int i=1;
    do
    {
        cout<<num<< "*" <<i << "="<<num*i <<endl;
        i=i+1;
    } while (i<=10);

    return 0;
}