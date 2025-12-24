#include<iostream>
using namespace std;

class Student{

    int marks = 70;

    public:

        void getMarks(){

            cout<<"Marks = "<<marks<<endl;
        }
};





int main(){

    Student s1;

    // s1.marks= 90; //not accrss marks is private

    s1.getMarks();


    return 0;
}