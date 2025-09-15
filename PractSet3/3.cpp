#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
        string title;
        float price;
    public:
        void set_values(string t,float pr){
            title = t;
            price = pr;
        }
        void get_values(void){
            cout<<endl<<"Book Details:"<<endl;
            cout<<"Title: "<<title<<endl;
            cout<<"Price: "<<price<<endl;
        }
};
int main(){
    string ti;
    float pri;

    cout<<"Enter Title of Book: ";
    cin>>ti;

    cout<<"Enter Price of Book: ";
    cin>>pri;

    Book b1;
    b1.set_values(ti,pri);
    b1.get_values();

    return 0;
}