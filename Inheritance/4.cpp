#include<iostream>
using namespace std;

class Animal {
public:
    void setAnimal() {
        cout << "This msg is from animal class." << endl;
    }
};

class Dog : public Animal {
public:
    void setDog() {
        cout << "This msg is from dog class." << endl;
    }
};

class Pitbull : public Animal {
public:
    void setPitbull() {
        cout << "This msg is from pitbull class." << endl;
    }
};

int main() {
    Dog d;
    Pitbull p;

    d.setAnimal();
    d.setDog();
    p.setPitbull();

    return 0;
}
