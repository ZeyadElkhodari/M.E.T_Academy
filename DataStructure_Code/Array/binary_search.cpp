#include <iostream>
using namespace std;

int main()
{
    cout << "____ Welcome in Binary Search Programme ____" << endl;

    int n, search, LA[100];
    int first, last, middle;

    cout << "\nEnter number of elements: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> LA[i];
    }

    cout << "Enter value to search: ";
    cin >> search;

    first = 0;
    last = n - 1;

    while (first <= last)
    {
        middle = (first + last) / 2;

        if (LA[middle] == search)
        {
            cout << "The location is: " << middle + 1 << endl;
            return 0;
        }
        else if (LA[middle] < search)
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
    }

    cout << "The element not found: " << search << endl;
    return 0;
}
