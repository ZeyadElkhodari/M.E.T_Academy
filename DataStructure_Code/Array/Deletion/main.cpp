#include <iostream>
using namespace std;

int main()
{
    int LA[] = {2, 4, 6, 8, 10, 11};
    int k = 3;
    int n = 6;

    cout << "___________ The Original Array ___________" << endl << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Index => " << i << " Element => " << LA[i] << endl;
    }


    // عملية الحذف
    for(int j=k ; j<n-1 ; j++)
    {
        LA[j] = LA[j+1];
    }

    n--;

    cout << endl << "__________ After Deletion ______________" << endl << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Index => " << i << " New Element => " << LA[i] << endl;
    }
}
