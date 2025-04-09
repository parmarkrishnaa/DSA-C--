// Determine if a year is a leap year.

#include<iostream>
using namespace std;

int main(){
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if(year % 4 == 0)
    {
        cout << "This year is leap year.";
    }
    else
    {
        cout << "This year is not leap year.";
    }

    return 0;
}