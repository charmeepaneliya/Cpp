//multilevel inheritance
#include<iostream>
using namespace std;

class p{
    protected:
        float celsius;
};

//convert Celcius to fahrenheit
class Q:public P{
    protected:
        float fahrenheit;

    public:

        void toFahrenheit(){
            
            fahrenheit= (celsius*9/5)+32;
            cout<<"fahrenheit: "<<"fahrenheit"<<endl;

        }

};

//convert fahrenheit to celsius

class R:public Q{

    float kelvin;

    public:
        void toKelvin(){

            kelvin = (fahrenheit-32)*5/9+273.15;
            cout<<"kelvin: "<<kelvin<<endl;

        }
};

int main(){
    R obj;
    obj.toFahrenheit();
    obj.toKelvin();

    return 0;
}