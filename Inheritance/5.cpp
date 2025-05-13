#include<iostream>
using namespace std;

class Animal {
public:
    void setAnimal() {
        cout << "This message is from the Animal class." << endl;
    }
};

class Dog : public Animal {
public:
    void setDog() {
        cout << "This message is from the Dog class." << endl;
    }
};

class Cat : public Animal {
public:
    void setCat() {
        cout << "This message is from the Cat class." << endl;
    }
};

class Hybrid : public Dog, public Cat {
public:
    void setHybrid() {
        cout << "This message is from the Hybrid class." << endl;
    }
};

int main() {
    Hybrid h;

    h.Dog::setAnimal();

    h.Cat::setAnimal();

    h.setDog();
    h.setCat();

    h.setHybrid();

    return 0;
}