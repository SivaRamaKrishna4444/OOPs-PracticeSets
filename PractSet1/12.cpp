#include<iostream>
using namespace std;
#include<cmath>

int main(){
    int a,b,c;

    cout<<"Enter Co-Eff of x^2: ";
    cin>>a;
    cout<<"Enter Co-Eff of x: ";
    cin>>b;
    cout<<"Enter Constant: ";
    cin>>c;

    float dis = ((b*b)-4*a*c);

    if(dis>0){
        cout<<endl<<"Roots are Real"<<endl;

        float root1,root2;

        root1 = (-b + sqrt(dis))/(2*a);
        root2 = (-b - sqrt(dis))/(2*a);
        
        cout<<"Roots are "<<root1<<" and "<<root2;
    }
    else if(dis == 0){
        cout<<endl<<"Roots are Real and Same"<<endl;

        float root = -b/(2*a);

        cout<<"Roots are "<<root<<" and "<<root;
    }

    else if(dis<0){
        cout<<endl<<"Roots are Imaginary"<<endl;

        float dis_imag = -dis;

        float real = -b/(2*a);
        float imag = sqrt(dis_imag)/(2*a);

        cout<<"Roots are "<<real<<" + "<<imag<<"i" << " and " <<real<<" - "<<imag<<"i";

    }

    return 0;
}