// Print the table of any number entered by the user.

#include<iostream>
using namespace std;

int main(){
    int i, num;

    cout << "Enter a number: ";
    cin >> num;

    for(i = 1; i <= 10; i++)
    {
        cout << num << " X " << i << " = " << num * i << endl;
    }

    return 0;
}