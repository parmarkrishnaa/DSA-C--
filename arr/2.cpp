#include<iostream>
using namespace std;

int main(){
    int arr[5], index, update;

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter an element " << i << ": ";
        cin >> arr[i];
    }

    for(int i = 0; i < 5; i++){
        cout << "Element of arr[" << i << "]: " << arr[i] << endl;
    }

    cout << "Enter index number: ";
    cin >> index;

    cout << "Enter update number: ";
    cin >> update;

    arr[index] = update;

    for(int i = 0; i < 5; i++){
        cout << "Element of arr[" << i << "]: " << arr[i] << endl;
    }

    return 0;
}