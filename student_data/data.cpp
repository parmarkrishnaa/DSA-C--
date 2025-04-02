#include <iostream>
using namespace std;

int main()
{
    int rollno;
    string stuName;
    float avg, cppm, foc, dpa, maths, total;

    cout << "Enter your Roll No.: ";
    cin >> rollno;

    cout << "Enter your name: ";
    cin >> stuName;

    cout << "Marks of CPPM: ";
    cin >> cppm;

    cout << "Marks of FOC: ";
    cin >> foc;

    cout << "Marks of DPA: ";
    cin >> dpa;

    cout << "Marks of MATHS: ";
    cin >> maths;

    total = (cppm + foc + dpa + maths);
    avg = (total / 4);

    cout << "Your Roll No. is " << rollno << endl;
    cout << "Your name is " << stuName << endl;
    cout << "Your marks of CPPM is " << cppm << endl;
    cout << "Your marks of foc is " << foc << endl;
    cout << "Your marks of dpa is " << dpa << endl;
    cout << "Your marks of maths is " << maths << endl;
    cout << "Total Marks = " << total << endl;
    cout << "Average Marks = " << avg << "%" << endl;

    if(cppm <= 100 && foc <= 100 && dpa <= 100 && maths <= 100)
    {
        if (cppm >= 33 && foc >= 33 && dpa >= 33 && maths >= 33)
        {
            cout << "You are PASS." << endl;
            if(avg >= 90)
            {
                cout << "Your grade is 'A'.";
            }
            else if(avg >= 75)
            {
                cout << "Your grade is 'B'.";
            }
            else if(avg >= 65)
            {
                cout << "Your grade is 'C'.You need improvement.";
            }
            else if(avg >= 55)
            {
                cout << "Your grade is 'D'.You need more improvement.";
            }
            else if(avg <= 40)
            {
                cout << "You are PASS.";
            }
            else
            {
                cout << "You are promoted.";
            }
        }
        else
        {
            cout << "You are FAIL.";
        }
    }
    else
    {
        cout << "Enter your valid marks.";
    }

    return 0;
}