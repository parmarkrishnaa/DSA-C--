// Print factorial of a given number.   

#include<iostream>
using namespace std;

int main(){
    int i, num, fact = 1;

    cout << "Enter n: ";
    cin >> num;

    for(i = 1; i <= num; i++)
    {
        fact *= i;
    }
    
    cout << "Factorial of " << num << "! is " << fact << "." << endl;
    
    return 0;
}