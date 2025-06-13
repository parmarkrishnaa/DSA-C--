#include<iostream>
#include<vector>
using namespace std;

// Function to merge two sorted subarrays
// arr[start..mid] and arr[mid+1..end]
void merge(vector<int> &arr, int start, int mid, int end){
    vector<int> temp; // Temporary vector to store merged result

    int i = start;     // Pointer for the left subarray
    int j = mid + 1;   // Pointer for the right subarray

    // Merge the two sorted halves into temp
    while(i <= mid && j <= end){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]); // Take smaller element
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining elements of left half, if any
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining elements of right half, if any
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    // Copy the merged elements back to the original array
    for(int i = 0; i < temp.size(); i++){
        arr[i + start] = temp[i]; // Adjust index with 'start'
    }
}

// Recursive function to divide the array and call merge
void mergeSort(vector<int> &arr, int start, int end){
    if(start < end){
        int mid = start + (end - start) / 2; // Avoids overflow

        // Recursively sort first and second halves
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        // Merge the sorted halves
        merge(arr, start, mid, end);
    }
}

int main(){
    // Sample input array
    vector<int> arr = {7, 2, 9, 4, 1, 10, 3, 6, 5, 8};

    // Display the original array
    cout << "Original Array: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call merge sort on the entire array
    mergeSort(arr, 0, arr.size() - 1);

    // Display the sorted array
    cout << "Sorted Array: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}