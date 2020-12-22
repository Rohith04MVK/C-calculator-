#include <iostream>

using namespace std;

int main()
{

    int year;

    cout << "Enter a year in YYYY format: ";
    cin >> year;

    if (year % 4 == 0)
    {
        cout << year << " is a leap year";
    }
    else
    {
        cout << year << " is not a leap year";
    }
    return 0;
}