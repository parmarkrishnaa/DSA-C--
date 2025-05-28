#include<iostream>
using namespace std;

class Student{
    public:
        int id;
        string name;
        Student *next;

    Student(){
        this->id = 0;
        this->name = " ";
        this->next = NULL;
    }
};

class LinkedList{
    public:
        Student *head;
        int size;

    LinkedList(){
        this->head = NULL;
        this->size = 0;
    }

    void insertAtFront(int id, string name){
        Student *newStudent = new Student();
        newStudent->id = id;
        newStudent->name = name;
        newStudent->next = head;
        head = newStudent;
        this->size++;
    }
    
    void insertAtEnd(int id, string name){
        Student *newStudent = new Student();
        newStudent->id = id;
        newStudent->name = name;
        
        if(head == NULL){
            head = newStudent;
        }else{
            Student *current = head;
            while(current->next != NULL){
                current = current->next;
            }
            current->next = newStudent;
        }
        this->size++;
    }
    
    void insertAtIndex(int index, int id, string name){
        if(index < 0 && index > size){
            cout << "Index is out of bounds.";
        }
        
        if(index == 0){
            insertAtFront(id, name);
        }else{
            Student *newStudent = new Student();
            Student *current = head;
            newStudent->id = id;
            newStudent->name = name;
            
            for(int i = 0; i < index - 1; i++){
                current = current->next;
            }
            newStudent->next = current->next;
            current->next = newStudent;
            this->size++;
        }
    }
    
    void deleteAtFront(){
        Student *newStudent = new Student();
        newStudent = this->head;
        head = head->next;
        this->size--;
    }
    
    void deleteAtEnd(){
        if(head == NULL){
            cout << "List is empty";
            return;
        }
        
        if(head->next == NULL){
            head = NULL;
        }
        else{
            Student *newStudent = head;
            
            while(newStudent->next->next != NULL){
                newStudent = newStudent->next;
            }
            newStudent->next = NULL;
        }
        this->size--;
    }

    void deleteAtIndex(int index){
        if(index < 0 || index > size){
            cout << "Index is out of bounds.";
            return;
        }

        if(index == 0){
            deleteAtFront();
        }
        else{
            Student *newStudent = head;

            for(int i = 0; i < index - 1; i++){
                newStudent = newStudent->next;
            }

            Student *current = newStudent->next;
            newStudent->next = current->next;
            this->size--;
        }
    }

    void update(int index, int id, string name){
        if(index < 0 || index > size){
            cout << "Index is out of bounds.";
            return;
        }
        
        Student *current = head;

        for(int i = 0; i < index; i++){
            current = current->next;
        }
        current->id = id;
        current->name = name;
    }

    void displayList(){
        Student *current = head;

        while(current != NULL){
            cout << "ID: " << current->id << endl;
            cout << "Name: " << current->name << endl;
            current = current->next;
        }
    }
};

int main(){
    LinkedList list;

    list.insertAtFront(2, "Alex Doe");
    list.insertAtFront(1, "John Doe");
    list.insertAtEnd(4, "Alexa");
    list.insertAtEnd(5, "Messi");
    
    list.insertAtIndex(2, 3, "Ronaldo");
    
    list.deleteAtFront();
    
    list.deleteAtEnd();

    list.deleteAtIndex(2);

    list.update(0, 1, "John Smith");

    list.displayList();

    return 0;
}