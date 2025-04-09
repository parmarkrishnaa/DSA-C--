// Calculator: take two numbers and an operator (+, -, *, /) using switch.

#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    char ch;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter a Arithmetic Operator: ";
    cin >> ch;

    cout << "Enter num2: ";
    cin >> num2;

    switch(ch)
    {
        case '+':
            cout << "Additon of " << num1 << " + " << num2 << " = " << (num1 + num2);
        break;
        case '-':
            cout << "Subtraction of " << num1 << " - " << num2 << " = " << (num1 - num2);
        break;
        case '*':
            cout << "Multiplication of " << num1 << " X " << num2 << " = " << (num1 * num2);
        break;
        case '/':
            cout << "Division of " << num1 << " / " << num2 << " = " << (num1 / num2);
        break;
        default:
            cout << "Invalid Choice.";
    }

    return 0;
}