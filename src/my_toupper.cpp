#include <iostream>
#include <string>

using namespace std;

char uppercase(char bla)
{
    return bla -('a'-'A');
}

string capitalizer(string text)
{

    for (int i = 0; i < text.length(); i++)
    {
        if (i == 0)
        {
            text[i] = toupper(text[i]);
        }

        else if (text[i - 1] == ' ')
        {
            text[i] = toupper(text[i]);
        }
    }
    return text;
}