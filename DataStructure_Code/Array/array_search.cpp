#include <iostream>
using namespace std;

int main()
{
    int LA[] = {1, 3, 5, 7, 8};
    int item = 5, n = 5;
    int j = 0;

    cout << "\n_________ The Original Array __________\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Index => " << i << " Element => " << LA[i] << endl;
    }

    cout << "\n__________ Output After Search ________\n\n";

    for( j =0 ; j < n ; j++)
    {
        if (LA[j] == item)
        {
            cout << "Found The Element = " << LA[j] << " at position " << j + 1 << endl;
            break;
        }
    }

    if (j == n)
    {
        cout << "Item Not Found in Array" << endl;
    }
}
