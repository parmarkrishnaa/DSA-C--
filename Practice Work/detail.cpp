#include<iostream>
using namespace std;

int main(){
    int age;
    string name, number, email, address;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your number: ";
    cin >> number;

    cout << "Enter your email: ";
    cin >> email;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your address: ";
    cin >> address;

    cout << "Your name is " << name << endl;
    cout << "Your number is " << number << endl;
    cout << "Your email is " << email << endl;
    cout << "Your age is " << age << endl;
    cout << "Your address is " << address << endl;

    return 0;
}