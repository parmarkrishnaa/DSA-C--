#include<iostream>
using namespace std;

int main(){
    int *ptr;
    int num = 10;

    ptr = &num;

    cout << "Value of address: " << *ptr;

    return 0;
}