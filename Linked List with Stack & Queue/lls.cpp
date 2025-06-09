#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack{
    public:
        Node *top;

    Stack(){
        this->top = NULL;
    }

    void push(int data){
        Node *newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    void pop(){
        if(top == NULL)
    }
};

int main(){
    return 0;
}