#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size)
{
    int count = 0;
    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            cout << count++ << " ";
        }
    }
    cout << endl;
}

int main()
{
    int array[] = {4, 2, 6, 5, 1, 3};
    int length = sizeof(array) / sizeof(array[0]);
    bubbleSort(array, length);
    for (auto value : array)
    {
        cout << value << endl;
    }
}