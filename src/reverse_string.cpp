#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cout << "Enter a word: ";
    cin >> str;

    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}