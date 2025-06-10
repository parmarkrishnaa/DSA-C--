#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    int pass = 1;

    while (pass < n)
    {
        for (int i = 0; i < n - pass; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        pass++;
    }
};

void print_array(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
};

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i << ": " << arr[i] << endl;
    }
    cout << endl;
    
    bubble_sort(arr, n);

    cout << "Sorted Array: ";
    print_array(arr, n);

    cout << endl;

    return 0;
}