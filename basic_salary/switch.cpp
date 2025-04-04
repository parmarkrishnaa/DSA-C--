#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    char ch;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter a arithmetic operator: ";
    cin >> ch;

    cout << "Enter num2: ";
    cin >> num2;

    switch(ch){
        case '+':
            cout << "Addition: " << (num1 + num2);
        break;
        case '-':
            cout << "Subtraction: " << (num1 - num2);
        break;
        case '*':
            cout << "Multilpication: " << (num1 * num2);
        break;
        case '/':
            cout << "Division: " << (num1 / num2);
        break;
        case '%':
            cout << "Modulus: " << (num1 % num2);
        break;
        default:
            cout << "Invalid Choice.";
    }
}