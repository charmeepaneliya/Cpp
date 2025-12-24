#include<iostream>
using namespace std;

class Person{

    public:
        void showName(){
            cout<<"Name:Tisha"<<endl;
        }


};

class Students : public Person{

    public:

    void showRoll(){
        cout<<"Roll NO = 10"<<endl;
    }
};

int main(){

    Students s1;

    s1.showName();
    s1.showRoll();


    return 0;
}