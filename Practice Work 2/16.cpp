// Use ternary to check if a number is positive or negative.

#include<iostream>
using namespace std; 

int main(){
    int num; 
    
    cout << "Enter a number: ";
    cin >> num; 
    
    (num >= 0) ? cout << "Number is Positve." : cout << "Number is Negative";
    
    return 0;
}