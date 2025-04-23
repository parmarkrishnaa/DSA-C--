#include<iostream>
using namespace std;

int main(){
    int *ptr;
    int num = 10;

    ptr = &num;

    cout << "Address of value: " << ptr;

    return 0;
}