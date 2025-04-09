// Check if a number is divisible by 5.

#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num % 5 == 0)
    {
        cout << "Number is divisible by 5.";
    }

    return 0;
}