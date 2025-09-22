// Doubt
#include<iostream>
using namespace std;

class counter{
    private:
        int count;
    public:
    static int totalCount;
        counter(int count){
            this->count = count;
        }

        

};

int counter :: totalCount = 0;

int main(){

    return 0;
}