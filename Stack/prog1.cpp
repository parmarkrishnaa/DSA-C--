#include<iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int capacity;

    Stack(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack(){
        delete[] arr;
    }

    void push(int element);

    void pop();

    void peek();

    bool isEmpty();

    bool isFull();

    int size();

    void display();
};

void Stack::push(int element){
    if (!isFull())
    {
        this->top++;
        this->arr[this->top] = element;
    }
    else{
        cout << "Stack Overflow." << endl;
    }
}

void Stack::pop(){
    if (!isEmpty())
    {
        this->top--;
    }
    else{
        cout << "Stack Underflow." << endl;
    }
}

void Stack::peek(){
    if (!isEmpty())
    {
        cout << "Top Element: " << this->arr[this->top] << endl;
    }
    else
    {
        cout << "Stack is empty." << endl;
    }
}

bool Stack::isEmpty(){
    return this->top == -1;
}

bool Stack::isFull(){
    return this->top == this->capacity - 1;
}

int Stack::size(){
    return this->top + 1;
}

void Stack::display(){
    if (!isEmpty())
    {
        cout << "Stack Elements: ";
        for (int i = this->top; i >= 0; i--)
        {
            cout << this->arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Stack is Empty." << endl;
    }
}

int main(){
    Stack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);

    stack.display();

    stack.pop();
    stack.pop();
    stack.pop();

    stack.display();

    stack.peek();

    stack.size();

    stack.isEmpty();

    stack.isFull();

    stack.display();

    return 0;
}