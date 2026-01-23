#include<iostream>
using namespace std;

int main(){

    try{
        int a,b;

         cout << "Enter first Number ";
        cin >> a;

        cout << "Enter second Number ";
        cin >> b;

        if (b==0){
            throw " number can't be divide by zero ";
        }  
        
        cout<<"the division of two number " << a / b;
    }

    catch(const char* msg){
        cout<<msg;
    }
    return 0;
}