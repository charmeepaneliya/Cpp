#include <iostream>
using namespace std;

class Cricket
{
    public:
        virtual int getTotalOvers(){
            return 0;
        }
};
class T20Match:public Cricket{
    public:
        int getTotalOvers()override{
           return 20;
        }
};
class TestMatch:public Cricket{
    public:
        int getTotalOvers()override{
            return 80;
        }
};
int main(){
    Cricket*c;

    T20Match t20;
    TestMatch test;

    c = &t20;
    cout<<"T20 Overs: "<<c->getTotalOvers()<<endl;
    
    c = &test;
    cout<<"Test Overs: "<<c->getTotalOvers()<<endl;

    return 0;
}