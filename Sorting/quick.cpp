#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[end];
    int i = start - 1;

    for(int j = start; j < end; j++){
        if(arr[j] <= pivot){
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[++i], arr[end]);

    return i;
}

void QuickSort(vector<int> &arr, int start, int end)
{
    if(start >= end) return;

    int pivot = partition(arr, start, end);

    QuickSort(arr, start, pivot - 1);
    QuickSort(arr, pivot, end);
}

void printArray(vector<int> &arr)
{
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Original Array: ";
    printArray(arr);

    QuickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    printArray(arr);

    return 0;
}