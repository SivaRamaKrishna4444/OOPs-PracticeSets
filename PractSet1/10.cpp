#include<iostream>
using namespace std;

int main(){
    int year;

    cout<<"Enter year to check leap or not: ";
    cin>>year;

    if(year%4==0){
        cout<<year<< " is leap year";
    }
    else{
        cout<<year<< " is not leap";
    }

    return 0;
}