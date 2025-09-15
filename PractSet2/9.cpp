#include<iostream>
using namespace std;

int main(){
    int i;
    
    do{
        cout<<"Enter a number: ";
        cin>>i;
    }while(i>=0);

    cout<<endl<<"Negative number entered: "<<i;
    return 0;
}