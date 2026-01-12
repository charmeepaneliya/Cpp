#include<iostream>
using namespace std;

class Number{
    private:
        int value;
    public:
         Number(int n){
            value = n;
         } 
         
         bool operator<(Number num){
            return value < num.value;
         }
         void display(){
            cout<<value;
         }
};
int main(){
    Number n1(70);
    Number n2(50);

    if(n1<n2){
        cout<<"second object contains a higher value: ";
        n2.display();
    }else{
        cout<<"first object contain higher value: ";
        n1.display();
    }
    return 0;
}