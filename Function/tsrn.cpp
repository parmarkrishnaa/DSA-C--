#include<iostream>
using namespace std;

void addition(int x, int y);

int main(){
    addition(5, 3);

    return 0;
}

void addition(int x, int y){
    cout << "Additon: " << x + y;
}