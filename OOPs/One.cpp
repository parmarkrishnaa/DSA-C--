#include<iostream>
using namespace std;

class One{
    int rollNo;
    string name;
public:
    void det(int rollNo, string name){
        this->rollNo = rollNo;
        this->name = name;
        cout << "Rollno: " << this->rollNo << endl;
        cout << "Name: " << this->name << endl;
    }
};

int main(){
    One o;
    
    int rollNo;
    string name;
    cout << "Enter your roll no.: ";
    cin >> rollNo;
    cout << "Enter your name: ";
    cin >> name;
    o.det(rollNo, name);
    
    return 0;
}