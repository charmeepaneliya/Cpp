#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student{
    private:
        int Roll;
        float Gpa;
        string Name;

    public:
    //default constructor
        Student(){
            Roll=0;
            Gpa=0.0;
            Name="not set";

            cout<<"Default Constructor Called"<<endl;

        }   

        //parameterized constructor

        Student(int r,float g, string n){
            Roll=r;
            Gpa=g;
            Name=n;

            cout<<"Perameterized Constructor Called"<<endl;
        }

        //copy constructor
        
        Student(const Student &s){
            Roll= s.Roll;
            Gpa= s.Gpa;
            Name= s.Name;

            cout<<"Copy Constructor Called"<<endl;

        }

        //geter methods

        int GetRoll() const{

            return Roll;
        }
        float GetGpa() const{
            return Gpa;
        }
        string Name() const{
            return Name;
        }

        void display() const{
            cout<<"Name :"<<Name<<"Roll no :"<<Roll<<"Gpa :"<<Gpa<<endl;

        }
        ~Student(){
            cout<<"Destructure called "<<endl;
        }
};

class StudentRecordManagement{
    private:

        vector<Student> students;

    public:
        void addStudent(const Student &s){
            students.push_back(s);
            cout<<"Student Data Added";
        } 
        
    void displayAllData(){
        cout<<"all student detail are"<<endl;

        if(students.empty()){
            cout<<"no student records available"<<endl;
        }else{
            for(int i=0; i<students.size(); i++){
                students[i].display();
            }
        }
    }    
};

int main(){
    Student s1(1,7.1,"abc");
    Student s2(2,8.7,"pqr");
    Student s3(3,7.5,"xyz");

    StudentRecordManagement manager;

    manager.addStudent(s1);
    manager.addStudent(s2);
    manager.addStudent(s3);

    manager.displayAllData();

    return 0;
}