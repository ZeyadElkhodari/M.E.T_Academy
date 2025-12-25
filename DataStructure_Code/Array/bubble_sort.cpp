#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;

    int array[num];
    int i, j, temp;

    cout << "Enter the elements one by one: ";
    for (i = 0; i < num; i++)
    {
        cin >> array[i];
    }

    // Bubble Sort
    for (i = 0; i < num - 1; i++)
    {
        for (j = 0; j < num - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                // swap
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array is: ";
    for (i = 0; i < num; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
