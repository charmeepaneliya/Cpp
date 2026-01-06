#include<iostream>
#include<string>
using namespace std;

class Employee{
    protected:
        int emp_id;
        string emp_name;
        int age;
        double salary;

    public: 

        virtual ~Employee(){}

        Employee(int id,string n, int a, double s){
             
            emp_id = id;
            emp_name = n;
            age = a;
            salary = s;
        }

       virtual void display(){

            cout<<"employee ID: "<<emp_id<<endl;
            cout<<"employee name: "<<emp_name<<endl;
            cout<<"employee age: "<<age<<endl;
            cout<<"employee salary: "<<salary<<endl;
        }
        
};
class FullTimeEmployee:public Employee{

    protected:
        double bonus;

    public:
       FullTimeEmployee(int id,string n,int a,double s):Employee(id,n,a,s){

            
            bouns = b;

        }    

        void display() override{
            cout<<"Full time Employee Details"<<endl;
            Employee::display();

            cout<<"Employee bouns: "<<bonus<<endl;
            
        }
};
class PartTimeEmployee:public Employee{

    protected:
        float hours_worked;

    public:
       PartTimeEmployee(int id,string n,int a,double s):Employee(id,n,a,s){

            
          hours_worked = h;

        }    

        void display() override{
            cout<<"Part time Employee Details"<<endl;
            Employee::display();

            cout<<"Employee work hours"<<hours_worked<<endl;
            
        }
};


int main(){

    int choice;

    
    do{
        cout<<".....Employee Details.....";
        cout<<"1.Employee ID: ";
        cout<<"2.Employee Name: ";
        cout<<"3.Employee age: ";
        cout<<"4.Employee salary: ";

        cin>>choice;
    }while(choice!=0){
        
    }

    

    

    return 0;
}