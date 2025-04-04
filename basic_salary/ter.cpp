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

    (num1 >= num2) 
        ? ((num1 >= num3) 
            ? ((num1 >= num4)
                ? cout << "num1 is max."
                : cout << "num4 is max.")
            : ((num3 >= num4)
                ? cout << "num3 is max."
                : cout << "num4 is max."))
        : ((num2 >= num3)
            ? ((num2 >= num4)
                ? cout << "num2 is max."
                : cout << "num4 is max.")
            : ((num3 >= num4)
                ? cout << "num3 is max."
                : cout << "num4 is max."));
            
    return 0;
}