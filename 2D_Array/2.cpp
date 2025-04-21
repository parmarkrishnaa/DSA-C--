#include<iostream>
using namespace std;

int main(){
    int arr[3][3], a[3][3], b[3][3], row, col;

    cout << "Enter the elements of A: ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }

    cout << "Elements of A: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl << "Enter the elements of B: ";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> b[i][j];
        }
    }

    cout << "Elements of B: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){
            arr[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << endl << "Addition of A and B: " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}