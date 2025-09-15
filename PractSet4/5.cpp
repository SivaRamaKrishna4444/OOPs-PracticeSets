#include<iostream>
using namespace std;

class Time{
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time(){
            this->hours = 0;
            this->minutes = 0;
            this->seconds = 0;
        }
        Time(int hr,int min){
            this->hours = hr;
            this->minutes = min;
            this->seconds = 0;
        }
        Time(int hrs,int mins,int sec){
            this->hours = hrs;
            this->minutes = mins;
            this->seconds = sec;
        }

        void get_time(void){
            cout<<"Hours: "<<this->hours<<" Minutes: "<<this->minutes<<" Seconds: "<<this->seconds<<endl;
            cout<<this->hours<<" : "<<this->minutes<<" : "<<this->seconds<<endl;
        }

};

int main(){
    Time t1;
    t1.get_time();

    Time t2(4,32);
    t2.get_time();

    Time t3(4,33,38);
    t3.get_time();
    
    return 0;
}