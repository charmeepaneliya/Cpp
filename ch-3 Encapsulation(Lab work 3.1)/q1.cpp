#include<iostream>
#include<string.h>
using namespace std;

class Student{

    private:

        int stu_id,stu_age;
        string stu_name,stu_course,stu_city,stu_email,stu_college;

   public:
   
        void getData(){

            cout<<"student id: ";
            cin>>stu_id;
            cin.ignore();

            cout<<"student name: ";
            getline(cin,stu_name);

            cout<<"student age: ";
            cin>>stu_age;
            cin.ignore();

            cout<<"student course: ";
            getline(cin,stu_course);

            cout<<"student city: ";
            getline(cin,stu_city);

            cout<<"student email: ";
            getline(cin,stu_email);

            cout<<"student college: ";
            getline(cin,stu_college);

        }

        void setData(){

            cout<<"student details........";

            cout<<"ID: "<<stu_id<<endl;
            cout<<"\nName: "<<stu_name<<endl;
            cout<<"\nAge: "<<stu_age<<endl;
            cout<<"\nCourse: "<<stu_city<<endl;
            cout<<"\ncity: "<<stu_city<<endl;
            cout<<"\nEmail: "<<stu_email<<endl;
            cout<<"\nCollege: "<<stu_college<<endl;
        }
};

int main(){

    int stu_id,stu_age;
    string stu_name,stu_course,stu_city,stu_email,stu_college;

    Student s[5];

    for(int i=0; i<5; i++){
        cout<<"Enter details of students: "<<i+1<<endl;
        s[i].getData();
    }

    for(int i=0; i<5; i++){
        s[i].setData();
    }

    return 0;
}