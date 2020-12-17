#include <iostream>
#include <string>

using namespace std;

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

int main()
{
    cout << "\n"
         << capitalizer("capitals are boring");
    return 0;
}