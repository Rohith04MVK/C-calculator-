#include <iostream>

using namespace std;

char lowercase(char alpha)
{
    return alpha - ('A' - 'a');
}

string lower(string text)
{

    for (int i = 0; i < text.length(); i++)
    {
        text[i] = lowercase(text[i]);
    }
    return text;
}

int main()
{
    cout << "\n"
         << lower("Heallo my friend");
    return 0;
}