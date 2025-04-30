#include<iostream>
using namespace std;

class Student{
    int rollNo;
    static int grid;
    string name;

    public:

    void setStudent(int rollNo, string name){
        this->rollNo = rollNo;
        this->name = name;
    }

    void getStudent(){
        cout << endl << "Roll No.: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Grid: " << grid << endl;
    }
};

int Student::grid = 8230;

int main(){
    int rollNo;
    string name;
    Student std;

    cout << "Enter your roll no.: ";
    cin >> rollNo;
    cout << "Enter your name: ";
    cin >> name;

    std.setStudent(rollNo, name);
    std.getStudent();
    return 0;
}