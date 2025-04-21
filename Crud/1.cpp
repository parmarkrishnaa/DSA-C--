#include <iostream>
using namespace std;

int main()
{
    int index, element, i, n, choice, size;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter 1 to insert an element." << endl;
    cout << "Enter 2 to update an element." << endl;
    cout << "Enter 3 to delete an element." << endl;
    cout << "Enter 4 to show all elements." << endl;
    cout << "Enter 0 to exit." << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            for (int i = 0; i < size; i++)
            {
                cout << "Enter The Element arr[" << i << "]" << ": ";
                cin >> arr[i];
            }
        break;
        case 2:
            cout << "Enter an index to update: ";
            cin >> index;
            cout << "Enter an element to update: ";
            cin >> element;
            arr[index] = element;
            break;
        case 3:
            cout << "Enter an index to delete: ";
            cin >> index;
            for (i = index; i < n; i++)
            {
                arr[i] = arr[i + 1];
            }
            n--;
            break;
        case 4:
            cout << "Elements are: ";
            cin >> arr[i];
            break;
        case 0:
            cout << "You are successfully exited.";
            break;
        default:
            cout << "Invalid Choice.";
        }
}