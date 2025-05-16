#include <iostream>
using namespace std;
template <typename T>
class Array
{
    T *arr;
    int size;

public:
    void create(int s)
    {
        this->size = s;
        arr = new T[size];
        
        for (int i = 0; i < size; i++)
        {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    void display()
    {
        cout << "Array Elements: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void addElement()
    {
        T *newArr = new T[size + 1];
        for (int i = 0; i < size; i++)
        {
            newArr[i] = arr[i];
        }
        cout << "Enter new element: ";
        cin >> newArr[size];
        delete[] arr;
        arr = newArr;
        size++;
        cout << "Element added successfully!" << endl;
    }
    void Delete()
    {
        int index;
        cout << "Enter index of element to delete: ";
        cin >> index;
        if (index < 0 || index >= size)
        {
            cout << "Invalid index!" << endl;
        }
        else
        {
            for (int i = index; i < size; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;
        }
    }
};
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    Array<int> a;
    a.create(size);
    int choice;
    do
    {
        cout << "Menu:" << endl;
        cout << "Enter 1 to display array" << endl;
        cout << "Enter 2 to Add Element" << endl;
        cout << "Enter 3 to Delete Element" << endl;
        cout << "Enter 4 to Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            a.display();
            break;
        case 2:
            a.addElement();
            break;
        case 3:
            a.Delete();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        break;
        }
    } while (choice != 4);
}