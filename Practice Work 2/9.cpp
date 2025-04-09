// Find the largest among three numbers using nested if.

#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "Enter num3: ";
    cin >> num3;

    if(num1 >= num2)
    {
        if(num1 >= num3)
        {
            cout << "num1 is largest.";
        }
        else
        {
            cout << "num3 is largest.";
        }
    }
    else
    {
        if(num2 >= num3)
        {
            cout << "num2 is largest.";
        }
        else
        {
            cout << "num3 is largest.";
        }
    }

    return 0;
}