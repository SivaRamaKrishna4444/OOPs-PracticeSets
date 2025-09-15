#include<iostream>
using namespace std;

class two;

class one{
    private:
        int a;
    public:
        one(int a){
            this->a = a;
        }
        void get_val(void){
            cout<<"Value of a: "<<this->a<<endl;
        }
        friend void compare(const one& o,const two& t);
};

class two{
    private:
        int b;
    public:
        two(int b){
            this->b = b;
        }
        void get_val(void){
            cout<<"Value of b: "<<this->b<<endl;
        }
        friend void compare(const one& o,const two& t);
};

void compare(const one& o,const two& t){
    if(o.a > t.b){
        cout<<"Class One Object is greater than Claass Two Object"<<endl<<o.a<<">"<<t.b<<endl;
    }
    else if(o.a < t.b){
        cout<<"Class Two Object is greater than Class One Object"<<endl<<o.a<<"<"<<t.b<<endl;
    }
    else if(o.a == t.b){
        cout<<"Both are Equal"<<endl<<o.a<<"=="<<t.b<<endl;
    }
}

int main(){
    int a,b;

    cout<<"Enter Value of a: ";
    cin>>a;

    cout<<"Enter value of b: ";
    cin>>b;

    one o(a);
    two t(b);

    compare(o,t);

    return 0;
}