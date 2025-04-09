// Print “Even” or “Odd” using ternary operator.

#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    (num % 2 == 0) ? cout << "Number is even." : cout << "Number is Odd.";

    return 0;
}