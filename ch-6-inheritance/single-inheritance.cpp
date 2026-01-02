//single level inheritance
#include<iostream>
using namespace std;

class X{
    protected:
        int a,b,c;
};

class Y:public X{
    public:
        void setData(int a,int b,int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

       void getData(){
            int cube;
            cube = (a*a*a)+(b*b*b)+(c*c*c);
            cout<<"Cube: "<<cube<<endl;
       } 
};

int main(){

    Y obj;
    obj.setData(5,7,3);
    obj.getData();

    return 0;
}