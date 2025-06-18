#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> &arr, int target){
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main(){

    vector<int> arr = {3,5,7,9,5,1};
    int target;

    cout << "Original Array: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << " ";
    }
    cout << endl;

    cout << "Enter element to be searched: ";
    cin >> target;

    int result = linearSearch(arr, target);

    if(result != -1)
    {
        cout << "Element is found at index " << result << endl;
    }
    else
    {
        cout << "Element is no found in array." << endl;
    }

    return 0;
}