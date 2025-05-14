#include<iostream>
using namespace std;

int main(){
    int *arr, size;

    cout << "Enter the size of array: ";
    cin >> size;
    
    arr = new int[size];

    if(arr == NULL){
        cout << "Memory allocation failed" << endl;
        return 1;
    }

    delete[] arr;
    return 0;   
}