#include<iostream>
using namespace std;

class Demo{
public:
    void demo(){
        cout << "Demo class demo function" << endl;
    }
};

class Demo2 : public Demo{
public:
    void demo(){
        cout << "Demo2 class demo function" << endl;
    }
};

int main(){
    Demo demo;
    Demo2 demo1;

    demo.demo();
    demo1.demo();

    return 0;
}
