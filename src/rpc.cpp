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
        cout << "You chose " << roc;
        break;

    case 2:
        cout << "You chose " << pap;
        break;
    case 3:
        cout << "You chose " << sci;
        break;
    default:
        cout << "Invalid input\n";
    }

    switch (computer)
    {
    case 1:
        cout << "Computer chose " << roc;
        break;

    case 2:
        cout << "Computer chose " << pap;
        break;
    case 3:
        cout << "Computer chose " << sci;
        break;
    default:
        cout << "Invalid input\n";
    }

    if (human == computer)
    {
        cout << "Tie!";
    }
    else if (human == 1 && computer == 3)
    {
        cout << "Your won!";
    }
    else if (human == 2 && computer == 1)
    {
        cout << "You won!";
    }
    else if (human == 3 && computer == 2)
    {
        cout << "You won!";
    }
    else
    {
        cout << "Sad, you lost =(";
    }

    return 0;
}