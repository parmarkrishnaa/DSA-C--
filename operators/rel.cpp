#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "num1 is greater than num2 is " << (num1 > num2) << endl;
    cout << "num1 is less than num2 is " << (num1 < num2) << endl;
    cout << "num1 is greater than or equal to num2 is " << (num1 >= num2) << endl;
    cout << "num1 is less than or equal to num2 is " << (num1 <= num2) << endl;
    cout << "num1 is equal to num2 is " << (num1 == num2) << endl;
    cout << "num1 is not equal to num2 is " << (num1 != num2) << endl;

    return 0;
}