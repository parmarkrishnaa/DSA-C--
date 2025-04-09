// Determine the grade of a student: Above 90: A, 80-90: B, 70-80: C, Below 70: D.

#include <iostream>
using namespace std;

int main()
{
    int avg;

    cout << "Enter your avg marks: ";
    cin >> avg;

    if (avg <= 100)
    {
        if (avg > 90)
        {
            cout << "Your Grade Is 'A'." << endl;
        }
        else if (avg > 80)
        {
            cout << "Your Grade Is 'B'." << endl;
        }
        else if (avg > 70)
        {
            cout << "Your Grade Is 'C'." << endl;
        }
        else
        {
            cout << "Your Grade Is 'D'." << endl;
        }
    }
    else
    {
        cout << "Enter your valid avg.";
    }
}