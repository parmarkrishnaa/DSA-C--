#include<iostream>
using namespace std;

void add(int a, int b){
    cout << "Addition: " << a + b;
}

int main(){
    int a, b;

    cout << "Enter a number: ";
    cin >> a;

    cout << "Enter a number: ";
    cin >> b;

    add(a, b);
}