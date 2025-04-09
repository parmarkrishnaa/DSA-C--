// Print the sum of first N natural numbers.

#include<iostream>
using namespace std;

int main(){
    int i, N, sum = 0;

    cout << "Enter n: ";
    cin >> N;

    for(i = 1; i <= N; i++)
    {
        sum += i;
    }
    
    cout << "Sum of first " << N << " natural number is " << sum << endl;
    
    return 0;
}