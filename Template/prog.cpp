#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b){
    return a + b;
}

int main(){

    cout << "Sum of "<< 5 << " and " << 3 << " is: " << add(5, 3);

}