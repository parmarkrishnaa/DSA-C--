#include<iostream>
using namespace std;

int cube(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    return num * num * num;
}

int main(){
    cout << "Cube: " << cube();

    return 0;
}