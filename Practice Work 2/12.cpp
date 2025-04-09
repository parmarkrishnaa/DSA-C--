// Take a number (1-7) and print the day of the week.

#include<iostream>
using namespace std;

int main(){
    int week;

    cout << "Enter a num(1-7): ";
    cin >> week;

    switch(week)
    {
        case 1:
            cout << "Monday";
        break;
        case 2:
            cout << "Tuesday";
        break;
        case 3:
            cout << "Wednesday";
        break;
        case 4:
            cout << "Thursday";
        break;
        case 5:
            cout << "Friday";
        break;
        case 6:
            cout << "Saturday";
        break;
        case 7:
            cout << "Sunday";
        break;
        default:
            cout << "Invalid Choice.";
    }
}