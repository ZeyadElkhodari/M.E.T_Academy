#include <iostream>
using namespace std;

void swap(int *a, int *b);
void selectionSort(int arr[], int size);

void selectionSort(int arr[], int size)
{
    int i, j, minIndex;

    for (i = 0; i < size - 1; i++)
    {
        minIndex = i;

        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(&arr[i], &arr[minIndex]);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int array[10], size, i;

    cout << "How many numbers you want to sort: ";
    cin >> size;

    cout << "Enter " << size << " numbers:\n";
    for (i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    selectionSort(array, size);

    cout << "Sorted array is:\n";
    for (i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
