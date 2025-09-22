#include<iostream>
using namespace std;

class Matrix{
    private:
        int arr[2][3];
    public:
        Matrix(int a,int b,int c,int d,int e,int f){
            this->arr[0][0] = a;
            this->arr[0][1] = b;
            this->arr[0][2] = c;
            this->arr[1][0] = d;
            this->arr[1][1] = e;
            this->arr[1][2] = f;            
        }

        void display(void){
            cout<<"Matrix: "<<endl;
            for(int i = 0;i<=1;i++){
                for(int j=0;j<=2;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        friend Matrix addMatrices(Matrix m1,Matrix m2);
};

Matrix addMatrices(Matrix m1,Matrix m2){
    Matrix m3(0,0,0,0,0,0);
    for(int i = 0;i<=1;i++){
        for(int j=0;j<=2;j++){
            m3.arr[i][j] = m1.arr[i][j] + m2.arr[i][j];
        }
    }
    return m3;
}

int main(){
    Matrix m1(1,2,3,4,5,6);
    m1.display();

    Matrix m2(6,5,4,3,2,1);
    m2.display();

    Matrix m4 = addMatrices(m1,m2);
    cout<<"Sum of Above two Matrices: "<<endl;
    m4.display();

    return 0;
}
