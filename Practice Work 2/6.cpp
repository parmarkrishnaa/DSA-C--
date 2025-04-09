// Check if a student has passed or failed based on marks (pass mark is 40).

#include<iostream>
using namespace std;

int main(){
    int mark;

    cout << "Enter your marks: ";
    cin >> mark;

    if(mark >= 40)
    {
        cout << "You are PASS.";
    }
    else
    {
        cout << "You are FAIL.";
    }

    return 0;
}