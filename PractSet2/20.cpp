#include<iostream>
using namespace std;

int main(){
    int marks;
    float sum = 0;
    int count = -1;
    do{
        cout<<"Enter Marks: ";
        cin>>marks;

        sum = sum + marks;
        count = count + 1;
    }while(marks!= -1);

    cout<<"Sum of Entered Marks: "<<sum+1<<endl;
    cout<<"Count of no.of marks entered: "<<count<<endl;

    float avg = (sum+1)/count;
    cout<<"Avg of Entered Marks: "<<avg;

    return 0;
}