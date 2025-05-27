#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
    public:
        Node *head;
        int size;

    LinkedList(){
        this->head = NULL;
        this->size = 0;
    }

    void insertAtFront(int data){
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        this->size++;
    }
    void insertAtEnd(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
        }else{
            Node *current = head;
            while(current->next != NULL){
                current = current->next;
            }
            current->next = newNode;
        }
        this->size++;
    }
    void insertAtIndex(int data, int index){
        if(index < 0 || index > size){
            cout << "Index is out of range!" << endl;
            return;
        }

        if(index == 0){
            insertAtFront(data);
        }else{
            Node *newNode = new Node(data);
            Node *current = head;

            for(int i = 0; i < index - 1; i++){
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
            this->size++;
        }
    }

    void deleteAtFront(){
        Node *temp = head;
        head = head->next;
        delete temp;
        this->size--;
    }
    void deleteAtEnd(){
        if(head == NULL){
            return;
        }

        if(head->next == NULL){
            delete head;
            head = NULL;
        }
        else{
            Node *current = head;
            while(current->next->next != NULL){
                current = current->next;
            }
            delete current->next;
            current->next = NULL;
        }
        this->size--;
    }
    void deleteAtIndex(int index){
        if(index < 0 || index > size){
            cout << "Index is out of range!" << endl;
            return;
        }

        if(index == 0){
            deleteAtFront();
        }else{
            Node *current = head;
            for(int i = 0; i < index - 1; i++){
                current = current->next;
            }
            Node *temp = current->next;
            current->next = temp->next;
            delete temp;
            this->size--;
        }
    }

    void update(int index, int element){
        if(index < 0 || index >= size){
            cout << "Index is out of range." << endl;
            return;
        }

        Node *current = head;

        for(int i = 0; i < index; i++){
            current = current->next;
        }

        current->data = element;
    }

    void displayList(){
        Node *current = head;

        while(current != NULL){
            cout << current->data << " ";
            current = current->next;
        }
    }
};

int main(){

    LinkedList list;
    int choice, index, element;

    do{
        cout << endl << "============================" << endl;
        cout << "==========  MENU  ==========" << endl;
        cout << "============================" << endl;
        cout << "Press 1 for insert at front." << endl;
        cout << "Press 2 for insert at end." << endl;
        cout << "Press 3 for insert at index." << endl;
        cout << "Press 4 for delete at front." << endl;
        cout << "Press 5 for delete at end." << endl;
        cout << "Press 6 for delete at index." << endl;
        cout << "Press 7 for update." << endl;
        cout << "Press 8 for view the list." << endl;
        cout << "Press 0 to exit the program." << endl;

        cout << endl << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter value to insert at front: ";
                cin >> element;

                list.insertAtFront(element);

                cout << "Value Inserted Successfully!" << endl;
            break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> element;

                list.insertAtEnd(element);

                cout << "Value Inserted Successfully!" << endl;
            break;
            case 3:
                cout << "Enter index value: ";
                cin >> index;

                cout << "Enter value to insert at index: ";
                cin >> element;

                list.insertAtIndex(index, element);

                cout << "Value Inserted Successfully!" << endl;
            break;
            case 4:
                list.deleteAtFront();

                cout << "Value Deleted Successfully!" << endl;
            break;
            case 5:
                list.deleteAtEnd();

                cout << "Value Deleted Successfully!" << endl;
            break;
            case 6:
                cout << "Enter index value: ";
                cin >> index;

                list.deleteAtIndex(index);

                cout << "Value Deleted Successfully!" << endl;
            break;
            case 7:
                cout << "Enter index value to update: ";
                cin >> index;

                cout << "Enter new value: ";
                cin >> element;
                list.update(index, element);

                cout << "Value Updated Successfully!" << endl;
            break;
            case 8:
                cout << "Linked List: ";
                list.displayList();
            break;
            case 0:
                cout << "Exiting the program..." << endl;
            break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }while(choice != 0);

    return 0;
}