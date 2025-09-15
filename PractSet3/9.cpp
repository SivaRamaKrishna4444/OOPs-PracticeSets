#include<iostream>
using namespace std;

class Temperature{
    private:
        float celsius;
    public:
        void setCelsius(float c){
            celsius = c;
        }
        void getFahrenheit(void){
            float fahrenheit = celsius*(9.0/5.0)+32;
            cout<<"Temp in Fahrenheit: "<<fahrenheit;
        }
};

int main(){
    
    Temperature t1;
    float cel;
    cout<<"Enter the Temp in Celsius: ";
    cin>>cel;

    t1.setCelsius(cel);
    t1.getFahrenheit();

    return 0;
}