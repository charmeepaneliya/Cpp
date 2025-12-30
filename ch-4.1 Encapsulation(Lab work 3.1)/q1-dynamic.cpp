#include<iostream>
#include<string.h>
using namespace std;

class Student{

    private:

        int stu_id,stu_age;
        string stu_name,stu_course,stu_city,stu_email,stu_college;

   public:
   
        void setData(int id,string name,int age,string course, string city,string email,string college){

            this->stu_id=id;
            this->stu_name=name;
            this->stu_age=age;
            this->stu_course=course;
            this->stu_city=city;
            this->stu_email=email;
            this->stu_college=college;

            

        }

        void getData(){

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

    int id,age;
    string name,course,city,email,college;

    Student s[5];

    for(int i=0; i<5; i++){
        cout<<"Enter details of students: "<<i+1<<endl;

        cout<<"student id: ";
            cin>>id;
            cin.ignore();

            cout<<"student name: ";
            getline(cin,name);

            cout<<"student age: ";
            cin>>age;
            cin.ignore();

            cout<<"student course: ";
            getline(cin,course);

            cout<<"student city: ";
            getline(cin,city);

            cout<<"student email: ";
            getline(cin,email);

            cout<<"student college: ";
            getline(cin,college);

            s[i].setData(id, name, age, course, city, email, college);
        
    }

    cout<<"student detail are..."<<endl;

    for(int i=0; i<5; i++){
        s[i].getData();
    }

    return 0;
}