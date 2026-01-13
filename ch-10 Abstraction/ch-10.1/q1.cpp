#include<iostream>
using namespace std;

class Admin{
    private:
        bool can_terminate;
        double total_annual_revenue;
        string company_name;

        protected:
            double manager_salary;
            double employee_salary;
            int total_staff;
            
        public:
            Admin(){
                company_name = "Tata Consultancy Services(TCS)";
                total_annual_revenue = 900000;
                total_staff = 150;
                can_terminate = true;
                manager_salary = 70000;
                employee_salary = 50000;
            }  
        
        virtual void myAccess(){
            cout<<"\n..........Admin Access..........\n";
            cout<<"Company Name: "<<company_name<<endl;
            cout<<"Manager Salary: "<<manager_salary<<endl;
            cout<<"Employee Salary: "<<employee_salary<<endl;   
            cout<<"total staff: "<<total_staff<<endl;
            cout<<"total anual revenue: "<<total_annual_revenue<<endl;
            cout<<"can terminate: "<<can_terminate<<endl;

        }


};

class Manager:public Admin{
    public:
        void myAccess()override{
            cout<<"\n..........Manager Access..........\n";
            cout<<"Manager Salary: "<<manager_salary<<endl;
            cout<<"Employee Salary: "<<employee_salary<<endl;
            cout<<"total staff: "<<total_staff<<endl;
           
        }
};

class Employee:public Manager{
    public:
        void myAccess()override{
            cout<<"\n..........Employee Access..........\n";
            cout<<"Employee Salary: "<<employee_salary<<endl;
            cout<<"Total staff: "<<total_staff<<endl;
        }
};
int main(){
    Admin a;
    Manager m;
    Employee emp;

    a.myAccess();
    m.myAccess();
    emp.myAccess();

    return 0;
}