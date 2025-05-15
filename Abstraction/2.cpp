#include<iostream>
using namespace std;

class Student{
public:
    int rollNo;
    string name;

public:
    virtual void getData() = 0;
};

class Detail : public Student{
public:
    void getData(){
        cout << "Enter roll no.: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
    }

    void displayData(){
        cout << "Your roll no is " << rollNo << "." << endl;
        cout << "Your name is " << name << "." << endl;
    }
};

int main(){
    Detail d;

    d.getData();

    d.displayData();

    return 0;
}