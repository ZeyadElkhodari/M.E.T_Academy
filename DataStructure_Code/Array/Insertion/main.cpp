#include <iostream>

using namespace std;

int main()

{

    int LA[] = {1, 3, 5, 7, 8};
    int k = 3, n = 5, item = 10;
    int i = 0, j = n - 1;

    cout << endl;
    cout << "________ The Original Array _______" << endl;
    cout << endl;

    for (int i = 0; i < 5; i++)

    {
        cout << " The Index => " << i << " " << " The Elements = " << LA[i] << endl;
    }

    cout << endl;

    cout << "_______ The Array After Insertion _____ " << endl;

    cout << endl;

    n = n + 1;

    while (j >= k)
    {
        LA[j + 1] = LA[j];
        j = j - 1;
    }

    LA[k] = item;
    for (int i = 0; i < n; i++)
    {
        cout << "The Index => " << i << " " << " The Elements = " << LA[i] << endl;
    }

}
