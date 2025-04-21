#include<iostream>
using namespace std;

int sq(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    return num * num;
}

int main(){
    cout << "Square: " << sq();

    return 0;
}