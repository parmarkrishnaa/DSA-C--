#include <iostream>
using namespace std;

class Queue
{
public:
    int front, rear, currentSize, capacity;
    int *arr;

    Queue(int capacity)
    {
        this->capacity = capacity;
        this->front = -1;
        this->rear = -1;
        this->currentSize = 0;
        this->arr = new int[capacity];
    }

    ~Queue()
    {
        delete[] arr;
    }

    void enqueue(int element)
    {
        if (currentSize == capacity)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            if (currentSize == 0) front = 0;
            rear = (rear + 1) % capacity;
            arr[rear] = element;
            currentSize++;
        }
    }

    void dequeue()
    {
        if (currentSize == 0)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            front = (front + 1) % capacity;
            currentSize--;
            if (currentSize == 0)
            {
                front = -1;
                rear = -1;
            }
        }
    }

    void frontElement()
    {
        if (currentSize == 0)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Front element: " << arr[front] << endl;
        }
    }

    void backElement()
    {
        if (currentSize == 0)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Back element: " << arr[rear] << endl;
        }
    }

    void isEmpty()
    {
        if (currentSize == 0)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Queue is not empty" << endl;
        }
    }

    void isFull()
    {
        if (currentSize == capacity)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            cout << "Queue is not full" << endl;
        }
    }

    void printSize()
    {
        cout << "Size of queue: " << currentSize << endl;
        if (currentSize == 0)
        {
            cout << "Queue is empty" << endl;
        }
        else if (currentSize == capacity)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            cout << "Queue is neither empty nor full" << endl;
        }
    }

    void display()
    {
        if (currentSize == 0)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Queue elements: ";
            for (int i = 0; i < currentSize; i++)
            {
                cout << arr[(front + i) % capacity] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Queue q(6);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    q.display();

    q.dequeue();
    q.dequeue();

    q.display();

    q.frontElement();
    q.backElement();

    q.isEmpty();

    q.enqueue(70);
    q.enqueue(70);

    q.isFull();

    return 0;
}
