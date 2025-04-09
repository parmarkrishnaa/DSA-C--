// Check if a student has passed or failed using ternary.

#include<iostream>
using namespace std;

int main(){
    int mark;

    cout << "Enter your avg marks: ";
    cin >> mark;

    (mark >= 33) ? cout << "You are PASS." : cout << "You are FAIL.";

    return 0;
}