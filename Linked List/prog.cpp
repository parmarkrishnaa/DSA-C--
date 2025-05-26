#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

int main(){
    Node *head = new Node();
    head->data = 10;
    head->next = NULL;

    Node *current = new Node();
    current->data = 20;
    current->next = NULL;
    head->next = current;

    current = new Node();
    current->data = 30;
    current->next = NULL;
    head->next->next = current;

    current = head;

    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}