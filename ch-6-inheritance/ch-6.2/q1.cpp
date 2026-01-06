#include<iostream>
using namespace std;

class RBI{
    protected:
         float rate;

    public:
        void getROI(){
            rate=1.0;
            cout<<"RBI RATE: "<<rate<<endl;
        }
};
class SBI : virtual public RBI{
    public:
        void getROI(){
            rate=7.5;
            cout<<"SBI RATE: "<<rate<<endl;
        }

};
class BOB : virtual public SBI{
    public:
        void getROI(){
            rate=3.5;
             cout<<"BOI RATE: "<<rate<<endl;
        }

};

class ICICI : virtual public BOB{
    public:
        void getROI(){
            rate=9.0;
             cout<<"ICICI RATE: "<<rate<<endl;
        }

};



int main(){

    RBI R;
    R.getROI();

    SBI S;
    S.getROI();

    BOB B;
    B.getROI();

    ICICI I;
    I.getROI();


    return 0;
}