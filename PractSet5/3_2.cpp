#include<iostream>
using namespace std;

class marks{
    private:
        int *arr = new int[5];
    public:
        marks(int m1,int m2,int m3,int m4,int m5){
            this->arr[0] = m1;
            this->arr[1] = m2;
            this->arr[2] = m3;
            this->arr[3] = m4;
            this->arr[4] = m5;
        }
        void get_details(void){
            cout<<"Marks: "<<endl<<"M1: "<<this->arr[0]<<" M2: "<<this->arr[1]<<" M3: "<<this->arr[2]<<" M4: "<<this->arr[3]<<" M5: "<<this->arr[4]<<endl;
        }
        ~marks(){
            delete arr;
            cout<<"Dynamic Memory has been removed"<<endl;
        }

};

int main(){
    
    marks m1(98,88,84,99,100);
    m1.get_details();
    
    return 0;
}