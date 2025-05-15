#include<iostream>
using namespace std;

class Demo{
public:
    virtual void func() = 0;
    virtual void func2() = 0;
    virtual void func3() = 0;
};

class Demo1 : public Demo{
public:
    void func(){
        cout << "Msg from func in Demo." << endl;
    }

    void func2(){
        cout << "Msg from func2 in Demo." << endl;
    }

    void func3(){
        cout << "Msg from func3 in Demo." << endl;
    }
};

int main(){
    Demo1 demo;

    demo.func();
    demo.func2();
    demo.func3();

    return 0;
}