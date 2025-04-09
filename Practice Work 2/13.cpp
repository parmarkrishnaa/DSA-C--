// Enter a character and check if it's a vowel (use switch).

#include<iostream>
using namespace std;

int main(){
    char ch;

    cout << "Enter a vowel: ";
    cin >> ch;

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "It is a vowel.";
        break;
        default:
            cout << "It is not vowel.";
    }

    return 0;
}