#include <iostream>

using namespace std;

int main()
{
    try
    {
        int age;

        cout << "Enter your age " << endl;
        cin >> age;

        if (age < 18)
        {
            throw age;
        }
        cout << "your are eligible for voting";
    }
    catch (int age)
    {
        cout << " your age is " <<  age  << "which is less then 18 " << endl;
        cout << "you can't give vote";
    }
    return 0;
}