#include <iostream>
#include <limits>

using namespace std;
int main()
{
    while(true)
    {
        double num1;
        double num2;
        char op;

        if (!(cin >> num1 >> op >> num2))
        {
            cout << "syntax error\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        if(op == '+')
        {
            cout << num1 + num2 << "\n";
        }
        else if(op == '-')
        {
            cout << num1 - num2 << "\n";
        }
        else if(op == '*')
        {
            cout << num1 * num2 << "\n";
        }
        else if(op == '/')
        {
            cout << num1 / num2 << "\n";
        }
        else
        {
            cout << "Syntax error \n";
        }
    }
}