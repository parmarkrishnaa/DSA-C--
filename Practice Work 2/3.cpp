// Write a program to check whether a person is eligible to vote (age ≥ 18).

#include<iostream>
using namespace std;

int main(){
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18)
    {
        cout << "You are eligible to vote.";
    }

    return 0;
}