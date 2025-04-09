// Write a program to check whether a given number is positive.

#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num >= 0)
    {
        cout << "Number is Positive.";
    }

    return 0;
}