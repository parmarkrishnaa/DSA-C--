// Find the largest of two numbers using ternary.

#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    (num1 > num2) ? cout << "num1 is large." : cout << "num2 is large.";

    return 0;
}