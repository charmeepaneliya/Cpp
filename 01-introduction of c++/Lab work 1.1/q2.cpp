#include<iostream>
using namespace std;

int main(){

    int start;
    int end;
    int count = 0;

    cout<<"enter the start year: ";
    cin>> start;

    cout<<"enter the end year: ";
    cin >> end;

    for(int year=start; year<=end; year++){

        if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
            cout <<  year<<" ";
            count++;
        }
            
        }

        cout<<"\nthe Leap years is:"<<count;
        return 0;
    }

    


  