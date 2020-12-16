#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int human, computer;

    /* initialize random seed: */
    srand(time(NULL));
    computer = rand() % 3 + 1;

    string roc = "1 => Rock\n";
    string pap = "2 => Paper\n";
    string sci = "3 => Scissors\n";

    cout << "====================\n";
    cout << "rock paper scissors!\n";
    cout << "====================\n";

    cout << roc;
    cout << pap;
    cout << sci;

    cout << "Choose a number: ";
    cin >> human;

    switch (human)
    {
    case 1:
        cout << "You chose " <<roc;
        break;

    case 2:
        cout << "You chose " << pap;
        break;
    case 3:
        cout<< "You chose " << sci;
        break;
    default:
        cout << "Invalid input\n";

    }

    return 0;
}