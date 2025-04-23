#include<iostream>
using namespace std;

int main(){
    int *ptr;
    int num1, num2;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    ptr = &num2;

    cout << "Sum of " << num1 << " and " << *ptr << " is: " << num1 + *ptr << endl;
    cout << "Difference of " << num1 << " and " << *ptr << " is: " << num1 - *ptr << endl;
    cout << "Product of " << num1 << " and " << *ptr << " is: " << num1 * *ptr << endl;
    cout << "Division of " << num1 << " and " << *ptr << " is: " << num1 / *ptr << endl;
    cout << "Modulo of " << num1 << " and " << *ptr << " is: " << num1 % *ptr << endl;

    return 0;
}