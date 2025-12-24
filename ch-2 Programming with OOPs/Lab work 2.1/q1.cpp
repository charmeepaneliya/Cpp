#include<iostream>
using namespace std;


class Employee{

    public:
        int emp_id, emp_age, emp_experience;
        string emp_name, emp_role, emp_company_name, emp_city;
        float emp_salary;

        void getData(){
            cout<<"\nEnter Employee id: ";
            cin>>emp_id;
            cin.ignore();

            cout<<"Enter Name: ";
            getline(cin,emp_name);

            cout<<"Enter age: ";
            cin>>emp_age;
            cin.ignore();

            cout<<"Enter Role: ";
            getline(cin,emp_role);

            cout<<"Enter salary: ";
            cin>>emp_salary;
            cin.ignore();

            cout<<"Enter city: ";
            getline(cin,emp_city);

            cout<<"Enter Experience (years): ";
            cin>>emp_experience;
            cin.ignore();

            cout<<"Enter company name: ";
            getline(cin,emp_company_name);
        }

        void displayData(){
            cout<<"\n-----Employee Details------"<<endl;
            cout<<"id: "<<emp_id<<endl;
            cout<<"Name:"<<emp_name<<endl;
            cout<<"Age: "<<emp_age<<endl;
            cout<<"Role: "<<emp_role<<endl;
            cout<<"Salary: "<<emp_salary<<endl;
            cout<<"City: "<<emp_city<<endl;
            cout<<"Experience: "<<emp_experience<<endl;
            cout<<"Company: "<<emp_company_name<<endl;
        }

    
};

int main(){

    Employee emp[5];

    for(int i=0; i<5; i++){
        cout<<"\nEnter Details of Employees "<<i+1<<endl;
        emp[i].getData();
    }

    for(int i=0; i<5; i++){
        emp[i].displayData();
    }

    return 0;
}