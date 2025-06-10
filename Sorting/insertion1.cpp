#include <iostream>
using namespace std;

void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
        {
            swap(arr[j], arr[j - 1]);
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element a[" << i << "]: ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Original Array: ";
    print(arr, n);

    insertion(arr, n);

    cout << "Sorted Array: ";
    print(arr, n);

    return 0;
}