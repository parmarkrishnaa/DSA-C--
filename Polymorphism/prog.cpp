#include<iostream>
using namespace std;

class Demo{
public:
    void demo(){
        cout << "Demo class demo function" << endl;
    }
    void demo(int a){
        cout << "Demo class demo function with parameter." << endl;
    }
    void demo(int a, int b){
        cout << "Demo class demo function with two parameters." << endl;
    }
};

int main(){
    Demo demo;

    demo.demo();
    demo.demo(5);
    demo.demo(5, 10);

    return 0;
}