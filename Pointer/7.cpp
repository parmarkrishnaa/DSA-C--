#include<iostream>
using namespace std;

int main(){
    int *ptr;
    int area;
    float len;

    cout << "Enter the length of square: ";
    cin >> len;

    ptr = &area;

    area = len * len;

    cout << "Area of square is " << *ptr << ".";

    return 0;
}