#include<iostream>
#define PI 3.14
using namespace std;

int main(){
    int length, breadth;
    float area, radius;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    area = length * breadth;

    cout << "Area of rectangle is " << area << endl;
    
    cout << "Enter radius: ";
    cin >> radius;
    
    area = PI * radius * radius;
    cout << "Area of circle is " << area << endl;

    return 0;
}