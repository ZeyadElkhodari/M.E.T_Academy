#include <iostream>
using namespace std;
// Update  Operation

int main()

{

    int LA[] = {1, 3, 5, 7, 8};
    int k = 3, n = 5, item = 10;
    int i, j;

    cout << endl;

    cout << "_______ The Original Array ________ " << endl;

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << " The Index = " << i << " " << " The Elemnats  " << LA[i] << endl;
    }

    cout << endl;

    cout << "________ The Array After Update ________ " << endl;

    cout << endl;

    LA[k - 1] = item;
    for (int i = 0; i < n; i++)

    {
        cout << " The Index => " << i << " " << " The Elemnats  " << LA[i] << endl;
    }
}
