#include<iostream>
using namespace std;

class Demo{
    int *arr;
public:
    Demo(int size){
        arr = new int[size];
    }
    ~Demo(){
        cout << "Destructor called" << endl;
        delete[] arr;
    }
};

int main(){

    Demo obj(6);

    obj.~Demo();

    return 0;
}