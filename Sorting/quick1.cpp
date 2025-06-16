#include<iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;

    for(int j = start; j < end; j++)
    {
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[++i], arr[end]);

    return i;
}

void QuickSort(int arr[], int start, int end)
{
    if(start >= end) return;

    int pivot = partition(arr, start, end);

    QuickSort(arr, start, pivot - 1);
    QuickSort(arr, pivot + 1, end);
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[10] = {7, 2, 9, 4, 1, 10, 3, 6, 5, 8};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);
    cout << endl;

    QuickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}