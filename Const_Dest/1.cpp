#include<iostream>
using namespace std;

class emp{
    // int e_id;
    // string e_name;

    public:
        emp(){
            cout << "Constructor" << endl;
        }

        ~emp(){
            cout << "Destruction" << endl;
        }
};

int main(){
    emp e1;


    return 0;
}