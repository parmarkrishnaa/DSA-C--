#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

int main(){
    int n, value;
    Node *head = NULL, *current = NULL;

    cout << "Enter the number of nodes: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Enter value for node " << i << ": ";
        cin >> value;

        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL){
            head = newNode;
            current = head;
        } else {
            current->next = newNode;
            current = current->next;
        }
    }

    current = head;

    cout << "Linked List: ";

    while(current != NULL){
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}