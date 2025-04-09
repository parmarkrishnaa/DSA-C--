// Check if a number is even or odd.

#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0)
    {
        cout << "Number is EVEN.";
    }
    else
    {
        cout << "Number is ODD.";
    }

    return 0;
}