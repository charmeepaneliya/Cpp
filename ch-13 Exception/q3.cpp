

#include <iostream>

using namespace std;

int main()
{
    try
    {
        string password;
        bool hasUpper;

        cout << "Enter your password ";
        cin >> password;

        for (int i = 0; i < password.length(); i++)
        {
            if (password[i] >= 'A' && password[i] <= 'Z')
            {
                hasUpper = true;
            }
        }
        if (!hasUpper)
        {
            throw "password must contain one uppercase later ";
        }
        cout << "your password is valid" << endl;
    }
    catch (...)
    {
        cout << "invalid password" << endl;
    }
    return 0;
}