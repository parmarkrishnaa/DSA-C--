#include<iostream>
using namespace std;

int main(){
    int *ptr[5];
    int num[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++){
        ptr[i] = &num[i];
    }

    for(int i = 0; i < 5; i++){
        cout << "Value of ptr[" << i << "]: " << *ptr[i] << endl;
    }

    return 0;
}