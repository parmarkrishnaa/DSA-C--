#include<iostream>
using namespace std;

int main(){
    int Basic_Salary, HRA, DA, MA, TA, Net_Salary, PT, PF, TDS;
    string name, company;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Currently in which company/institute you are working: ";
    cin >> company;

    cout << "Enter your salary: ";
    cin >> Basic_Salary;

    HRA = Basic_Salary * 0.20;
    DA = Basic_Salary * 0.05;
    MA = 5000;
    TA = Basic_Salary * 0.10;
    // Gross
    PT = 200;
    PF = Basic_Salary * 0.15;
    TDS = Basic_Salary * 0.05;

    Basic_Salary = Basic_Salary + (HRA + DA + MA + TA);

    Net_Salary = Basic_Salary - (PT + PF + TDS);

    cout << endl << "Your name is " << name << '.' << endl;
    cout << endl << "You are the employee of " << company << '.' << endl << endl;
    cout << "HRA is " << HRA << '.' << endl;
    cout << "DA is " << DA << '.' << endl;
    cout << "MA is " << MA << '.' << endl;
    cout << "TA is " << TA << '.' << endl;
    cout << "Your basic salary is " << Basic_Salary << '.' << endl << endl;
    cout << "PT is " << PT << '.' << endl;
    cout << "PF is " << PF << '.' << endl;
    cout << "TDS is " << TDS << '.' << endl;
    cout << "Your net salary is " << Net_Salary << '.';

    return 0;
}