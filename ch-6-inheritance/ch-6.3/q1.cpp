#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    int emp_id;
    string emp_name;
    int age;
    double salary;

public:
    virtual ~Employee() {}

    void setEmployee(int id, string n, int a, double s)
    {

        emp_id = id;
        emp_name = n;
        age = a;
        salary = s;
    }

    virtual void display()
    {

        cout << "employee ID: " << emp_id << endl;
        cout << "employee name: " << emp_name << endl;
        cout << "employee age: " << age << endl;
        cout << "employee salary: " << salary << endl;
    }
};
class FullTimeEmployee : public Employee
{

protected:
    double bonus;

public:
    void setFullTimeEmployee(int id, string n, int a, double s, double b)
    {

        setEmployee(id, n, a, s);
        bonus = b;
    }

    void display() override
    {
        cout << "\n---Full time Employee Details---\n"
             << endl;
        Employee::display();

        cout << "Employee bonus: " << bonus << endl;
    }
};
class PartTimeEmployee : public Employee
{

protected:
    float hours_worked;

public:
    void setPartTimeEmployee(int id, string n, int a, double s, float h)
    {

        setEmployee(id, n, a, s);
        hours_worked = h;
    }

    void display() override
    {
        cout << "\nPart time Employee Details\n" << endl;
        Employee::display();

        cout << "Employee work hours" << hours_worked << endl;
    }
};

int main()
{
    const int MAX = 10;
    Employee *employees[MAX];
    int count = 0;
    int choice;

    do
    {
        cout << "\n=====Employee Details=====\n";
        cout << "1. Add Full Time Employee\n";
        cout << "2. Add Part Time Employee\n";
        cout << "3. Display All Employees\n";
        cout << "4. Delete Employees\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1 && count < MAX)
        {
            int id, age;
            string name;
            double salary, bonus;

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Salary: ";
            cin >> salary;
            cout << "Enter Bonus: ";
            cin >> bonus;

            FullTimeEmployee *fte = new FullTimeEmployee();
            fte->setFullTimeEmployee(id, name, age, salary, bonus);
            employees[count++] = fte;
        }
        else if (choice == 2 && count < MAX)
        {
            int id, age;
            string name;
            double salary;
            float hours;

            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Salary: ";
            cin >> salary;
            cout << "Enter Hours Worked: ";
            cin >> hours;

            PartTimeEmployee *pte = new PartTimeEmployee();
            pte->setPartTimeEmployee(id, name, age, salary, hours);
            employees[count++] = pte;
        }
        else if (choice == 3)
        {
            for (int i = 0; i < count; i++)
            {
                employees[i]->display();
            }
        }
        else if (choice == 4)
        {
            for (int i = 0; i < count; i++)
            {
                delete employees[i];
            }
            count = 0;
            cout << "All employees deleted.\n";
        }

    } while (choice != 5);

    for (int i = 0; i < count; i++)
    {
        delete employees[i];
    }

    return 0;
}