// Write a program to check whether a student has passed an exam (pass mark is 35).

#include<iostream>
using namespace std;

int main(){
    int mark;

    cout << "Enter your marks: ";
    cin >> mark;

    if(mark >= 35)
    {
        cout << "You are PASS.";
    }

    return 0;
}