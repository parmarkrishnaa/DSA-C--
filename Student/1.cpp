#include<iostream>
using namespace std;

class Student{
    int rollNo;
    string name;

    public:

    void setStudent(int rollNo, string name){
        this->rollNo = rollNo;
        this->name = name;
        // cout << "Roll No: " << rollNo << endl;
        // cout << "Name: " << name << endl;
    }

    void getStudent(){
        cout << endl << "Roll No.: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main(){

    int n, rollNo;
    string name;

    cout << "Enter the number of students: ";
    cin >> n;

    Student std[n];

    for(int i = 0; i < n; i++){
        cout << endl << "Enter your Roll No.: ";
        cin >> rollNo;

        cout << "Enter your Name: ";
        cin >> name;

        std[i].setStudent(rollNo, name);
    }

    for(int i = 0; i < n; i++){
        std[i].getStudent();
    }

    return 0;
}