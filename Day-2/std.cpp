#include<iostream>
using namespace std;

int main(){
    int roll, age;
    char name[10];

    cout << "Enter your Roll No.: ";
    cin >> roll;

    cout << "Enter your Name: ";
    cin >> name;

    cout << "Enter your Age: ";
    cin >> age;

    cout << "Your Roll No. is " << roll << endl;
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;

    return 0;
}