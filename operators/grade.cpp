#include <iostream>
using namespace std;

int main()
{
    int avg;

    cout << "Enter your average marks: ";
    cin >> avg;

    if (avg <= 100)
    {
        if (avg >= 90)
        {
            cout << "Your grade is A" << endl;
        }
        else if (avg >= 75)
        {
            cout << "Your grade is B" << endl;
        }
        else if (avg >= 55)
        {
            cout << "Your grade is C" << endl;
        }
        else if (avg >= 40)
        {
            cout << "Your grade is D" << endl;
        }
        else if (avg == 33)
        {
            cout << "You are Promotted." << endl;
        }
        else
        {
            cout << "You are Fail." << endl;
        }
    }
    else
    {
        cout << "Enter your grade properly.";
    }

    return 0;
}