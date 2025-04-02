#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3, num4;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "Enter num3: ";
    cin >> num3;

    cout << "Enter num4: ";
    cin >> num4;

    if(num1 >= num2)
    {
        if(num1 >= num3)
        {
            if(num1 >= num4)
            {
                cout << "num1 is maximum";
            }
            else
            {
                cout << "num4 is maximum";
            }
        }
        else
        {
            if(num3 >= num4)
            {
                cout << "num3 is maximum";
            }
            else
            {
                cout << "num4 is maximum";
            }
        }
    }
    else
    {
        if(num2 >= num3)
        {
            if(num2 >= num4)
            {
                cout << "num2 is maximum";
            }
            else
            {
                cout << "num4 is maximum";
            }
        }
        else
        {
            if(num3 >= num4)
            {
                cout << "num3 is maximum";
            }
            else
            {
                cout << "num4 is maximum";
            }
        }
    }

    return 0;
}