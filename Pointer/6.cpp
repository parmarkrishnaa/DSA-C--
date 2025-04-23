#include<iostream>
using namespace std;
#define PI 3.14

int main(){
    int *ptr;
    int area;
    float radius;

    cout << "Enter the radius of circle: ";
    cin >> radius;

    ptr = &area;

    area = PI * radius * radius;

    cout << "Area of circle is " << *ptr << ".";

    return 0;
}