// Check if a person is eligible to vote, and if eligible, check whether they are eligible for contesting an election (age ≥ 25).

#include<iostream>
using namespace std;

int main(){
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18)
    {
        if(age >= 25)
        {
            cout << "You are eligible to participate.";
        }
        else
        {
            cout << "You can vote.";
        }
    }
    else
    {
        cout << "You are not eligible to vote.";
    }

    return 0;
}