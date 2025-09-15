#include<iostream>
using namespace std;

int main(){

    int t1 = 0,t2 = 1;
    int next = t1 + t2;
    int terms;
    cout<<"Enter no.of terms: ";
    cin>>terms;

    cout<<"Fibonacci Series upto "<<terms<<" terms: "<<endl;
    cout<<t1<<" "<<t2<<" ";

    for(int i = 0;i<=terms-2;i++){
        cout<<next<<" ";

        t1 = t2;
        t2 = next;
        next = t1+t2;
    }
    return 0;
}