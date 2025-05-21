#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int size, choice;

    cout<<"Enter the size of vector: ";
    cin>>size;
    vector<int> numbers(size);
    
    for(int i=0;i<size;i++){
        cout<<"Enter the elements of vector numbers["<<i<<"]: ";
        cin>>numbers[i];
    }

    cout<<"Your vector is: ";

    for(int i=0;i<size;i++){
        cout<<numbers[i]<<" ";
    }

    do
    {
        cout << "--- Menu ---" << endl;
        cout << "Press 1 to add a number." << endl;
        cout << "Press 2 to remove a number." << endl;
        cout << "Press 3 to display the numbers." << endl;
        cout << "Press 4 to display the first number." << endl;
        cout << "Press 5 to display the last number." << endl;
        cout << "Press 6 to clear the numbers." << endl;
        cout << "Press 7 to exit." << endl;
        cout << endl << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int num;

            cout << endl << "Enter a number to add: ";
            cin >> num;

            numbers.push_back(num);

            cout << "Number is added." << endl;
            break;
        case 2:
            int index;

            cout << endl << "Enter the index number to remove: ";
            cin >> index;

            numbers.erase(numbers.begin() + index);

            cout << "Number is removed." << endl;
            break;
        case 3:
            cout << "Numbers are: ";

            for (int i = 0; i < numbers.size(); i++)
            {
                cout << numbers.at(i) << " " << numbers[i] << endl;
            }
            break;
        case 4:
            cout << "First number is: " << numbers.front() << endl;
            break;
        case 5:
            cout << "Last number is: " << numbers.back() << endl;
            break;
        case 6:
            numbers.clear();

            cout << "Numbers are cleared." << endl;
            break;
        }
    } while (choice != 7);

    cout << "Exiting..." << endl;
    cout << "Exited Successfully!" << endl;
    return 0;
}