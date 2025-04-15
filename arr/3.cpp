#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    for(int i = 0; i < 5 ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }

    cout<<"array elements : ";
    for(int val : arr)
    {
        cout<<val<<", ";
    }

    return 0;
}