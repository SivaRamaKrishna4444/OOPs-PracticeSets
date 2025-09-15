#include<iostream>
using namespace std;

class Distance{
    private:
        int feet;
        float inches;
    public:
        Distance(){
            this->feet = 0;
            this->inches = 0;
        }
        Distance(int ft){
            this->feet = ft;
            this->inches = 0;
        }
        Distance(int ft,float inch){
            this->feet = ft;
            this->inches = inch;
        }

        void get_details(void){
            cout<<"Distance: "<<this->feet<<" ft "<<this->inches<<" inch(es) "<<endl;
        }
};

int main(){

    Distance d1;
    d1.get_details();

    Distance d2(5);
    d2.get_details();
    
    Distance d3(5,8);
    d3.get_details();

    return 0;
}