#include<iostream>
using namespace std;

int main(){
    int *p, **q, ***r, n;

    cout << "Enter a number: ";
    cin >> n;

    p = &n;
    q = &p;
    r = &q;

    cout << "Address of value: " << *p << endl;
    cout << "Address of value: " << **q << endl;
    cout << "Address of value: " << ***r << endl;
}