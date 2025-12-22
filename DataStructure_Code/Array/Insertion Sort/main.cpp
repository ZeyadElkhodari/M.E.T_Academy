#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[64];

    cout << "Enter number of elements: ";
    cin >> n;

    if (n > 64 || n <= 0)
    {
        cout << "Invalid number of elements";
        return 0;
    }

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    cout << "Sorted list in ascending order:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
