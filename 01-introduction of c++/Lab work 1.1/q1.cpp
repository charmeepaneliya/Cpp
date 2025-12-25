#include<iostream>
using namespace std;

int main(){

    int a;

    cout<<"Enter Elements array size: ";
    cin >> a;

    int arr[a];

    cout<<"Enter elements: ";
    for(int i=0; i<a ; i++){
        cin>> arr[i];
    }

    cout<<"even elemens: ";
    for(int i=0; i<a; i++){
        if(arr[i] % 2==0){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}