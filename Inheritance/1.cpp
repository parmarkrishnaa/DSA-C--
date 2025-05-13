#include<iostream>
using namespace std;

class Student{
public:
    int grid;
    string name;

    void setGrid(){
        cout << "Enter your gr-id: ";
        cin >> grid;        

        cout << "Enter your name: ";
        cin >> name;        
    }

    void getStudentInfo(){
        cout << "Your gr-id is " << grid << "." << endl;
        cout << "Your name is " << name << "." << endl;
    }
};

class Details : public Student{
public:
    int roll, age;

    void setRoll(){
        cout << "Enter your roll number: ";
        cin >> roll;

        cout << "Enter your age: ";
        cin >> age;
    }

    
    void getDetails(){
        getStudentInfo();
        cout << "Your roll number is " << roll << "." << endl;
        cout << "Your age is " << age << "." << endl;

    }
};

int main(){
    Details det;

    det.setGrid();
    det.setRoll();
    det.getDetails();

    return 0;
}