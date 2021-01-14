#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> my_array;

    for (int i = 0; i < 10; i++)
    {
        my_array.push_back(i);
    }

    cout << "All the elements in the array: ";
    for (auto i = my_array.begin(); i != my_array.end(); ++i)
    {
        cout << *i << " ";
    }

    cout << "\n" << "Size of array: " << my_array.size();

    return 0;
}