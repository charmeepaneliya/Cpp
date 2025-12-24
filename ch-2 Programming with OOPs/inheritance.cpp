#include<iostream>
using namespace std;


class Food{
    public:

        void getEat(){

            cout<<"Food is good for health"<<endl;
        }
};

class Fruit:public Food {

    public :

        void getTest(){

            cout << "Fruit is very healthy"<<endl;
        }
};

int main(){

    Fruit f;

    f.getEat();
    f.getTest();


    return 0;
}