#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
        string title;
        string author;
        float price;
    public:
        Book(string t1){
            this->title = t1;
            this->author = "Unknown";
            this->price = 0;
        }
        Book(string t2,string a2){
            this->title = t2;
            this->author = a2;
            this->price = 0;
        }
        Book(string t3,string a3,float p3){
            this->title = t3;
            this->author = a3;
            this->price = p3;
        }

        void get_details(void){
            cout<<"Book Details: "<<endl;
            cout<<"Title: "<<this->title<<endl;
            cout<<"Author: "<<this->author<<endl;
            cout<<"Price: "<<this->price<<endl;
        }

};

int main(){
    Book b1("C++");
    b1.get_details();

    Book b2("C++","Ujjwal Verma");
    b2.get_details();

    Book b3("C++","Ujjwal Verma",999.99);
    b3.get_details();
    
    return 0;
}