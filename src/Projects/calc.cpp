#include <iostream>

using namespace std;

int main()
{
    double num1, num2, result;
    char op;
    do
    {
        cout << "\n Enter a number: ";
        cin >> num1;
        cout << "\n Enter an operator: ";
        cin >> op;
        cout << "\n Enter the second number: ";
        cin >> num2;

        switch (op)
        {
        case '+':
            cout << num1 + num2;
            break;

        case '-':
            cout << num1 - num2;
            break;

        case '*':
            cout << num1 * num2;
            break;

        case '/':
            cout << num1 / num2;
            break;
        }

    } while (op != 'e');
    return 0;
}