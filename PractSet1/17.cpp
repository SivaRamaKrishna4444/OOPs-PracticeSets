#include<iostream>
using namespace std;

int main(){
    int num;
    int term1 = 0;
    int term2 = 1;
    int next_term = term1+term2;
    cout<<"Enter no.of Terms: ";
    cin>>num;

    cout<<"Fibonocci Series upto "<<num<<" terms: "<<endl;
    cout<<term1<<" "<<term2<<" ";

    for(int i = 3; i<=num;i++){
        cout<<next_term<<" ";
        term1 = term2;
        term2 = next_term;
        next_term = term1+term2;
    }

    return 0;

}