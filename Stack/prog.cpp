#include <iostream>
using namespace std;

int stack[10], n = 10, top = -1;

void push(int element)
{
    if (top >= n - 1)
    {
        cout << "Stack Overflow." << endl;
    }
    else
    {
        top++;
        stack[top] = element;
    }
}

void pop()
{
    if (top <= -1)
    {
        cout << "Stack Underflow." << endl;
    }
    else
    {
        stack[top] = 0;
        top--;
    }
}

void peek()
{
    if (top <= 0)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Top Element: " << stack[top] << endl;
    }
}

void front()
{
    if (top <= 0)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Front Element: " << stack[2] << endl;
    }
}

void clear()
{
    top = -1;
    cout << "Stack cleared." << endl;
}

void isEmpty()
{
    if (top < 0)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }
}

void isFull()
{
    if (top >= n - 1)
    {
        cout << "Stack is Full." << endl;
    }
    else
    {
        cout << "Stack is not Full." << endl;
    }
}

void display()
{
    if (top < 0)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack Elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);

    display();

    isFull();

    pop();
    pop();
    pop();
    pop();

    display();

    isFull();

    return 0;
}