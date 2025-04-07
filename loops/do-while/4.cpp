#include<iostream>
using namespace std;

int main(){
    int i;

    i = 10;

    do{
        cout << i << endl;
        i -= 2;
    }while(i >= 2);

    return 0;
}