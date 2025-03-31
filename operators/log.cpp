#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "Logical AND of num1 and num2 is " << ((num1 > 0) && (num2 > 0)) << endl;
    cout << "Logical OR of num1 and num2 is " << ((num1 > 0) || (num2 > 0)) << endl;
    cout << "Logical NOT of num1 is " << !(num1 > 0) << endl;

    return 0;
}