#include<iostream>
using namespace std;

int main(){
    int emp_ID, salary;
    char emp_name[10];

    cout << "Enter your ID No.: ";
    cin >> emp_ID;

    cout << "Enter your Name: ";
    cin >> emp_name;

    cout << "Enter your Salary: ";
    cin >> salary;

    cout << "Your id is " << emp_ID << endl;
    cout << "Your name is " << emp_name << endl;
    cout << "Your salary is " << salary << endl;

    return 0;
}