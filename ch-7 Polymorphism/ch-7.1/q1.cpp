#include<iostream>
using namespace std;

class Calcualte{
    public:
        void Calculater(int a, int b){
            cout<<"Division: "<<a/b<<endl;
    
        }
        void Calculater(int a, int b,int c){
            cout<<"substraction: "<<a-b-c<<endl;
        }
        void Calculater(int a, int b,int c,int d){
            cout<<"multiplication: "<<a*b*c*d<<endl;
        }
        void Calculater(int a, int b,int c,int d,int e){
            cout<<"addition: "<<a+b+c+d+e<<endl;
        }

};
int main(){
    Calcualte c;

    c.Calculater(10,20);
    c.Calculater(40,60,50);
    c.Calculater(10,20,30,40);
    c.Calculater(10,20,30,40,50);

    return 0;
}