#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Enter th size of array: ";
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    
    cout << "Original Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}