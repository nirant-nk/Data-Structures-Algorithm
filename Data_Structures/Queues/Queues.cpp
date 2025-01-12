#include <iostream>
using namespace std;

template<typename T>
struct QueueNode {
    T data;
    QueueNode<T>* next;

    QueueNode(const T& data) : data(data), next(nullptr) {}
};

template<typename T>
class Queue {
    QueueNode<T>* front;
    QueueNode<T>* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    ~Queue() {
        cout<<"\nQueue Destructor Called!";
        while (!isEmpty()) {
            dequeue();
        }
    }

    void enqueue(const T& value) {
        QueueNode<T>* newNode = new QueueNode<T>(value);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    T* peek() {
        if (isEmpty()) {
            return nullptr;
        }
        return &(front->data);
    }

    T* dequeue() {
        if (isEmpty()) {
            return nullptr;
        }

        T* tempData = new T(front->data); 
        QueueNode<T>* tempNode = front;
        front = front->next;

        if (!front) {
            rear = nullptr;
        }

        delete tempNode;
        return tempData;
    }

    void display() {
        if (isEmpty()) {
            cout << "\nQueue is empty\n";
            return;
        }

        QueueNode<T>* temp = front;
        cout << "\nQueue contents: ";
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

    bool isEmpty() {
        return front == nullptr;
    }
};

int main() {
    Queue<int> q;
    int choice = 0;

    do {
        cout << "\n\n----- Queue Menu --------";
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Peek";
        cout << "\n4. Display";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int value;
            cout << "\nEnter the value to enqueue: ";
            cin >> value;
            q.enqueue(value);
            break;
        }
        case 2: {
            int* dequeuedValue = q.dequeue();
            if (dequeuedValue) {
                cout << "\nThe value " << *dequeuedValue << " is dequeued\n";
                delete dequeuedValue;
            } else {
                cout << "\nQueue is empty\n";
            }
            break;
        }
        case 3: {
            int* frontValue = q.peek();
            if (frontValue) {
                cout << "\nFRONT: " << *frontValue << "\n";
            } else {
                cout << "\nQueue is empty\n";
                cout<<frontValue;
            }
            break;
        }
        case 4:
            q.display();
            break;
        case 5:
            cout << "\nExiting Program....";
            break;
        default:
            cout << "\nInvalid Choice! Try Again! \n";
            break;
        }
    } while (choice != 5);

    return 0;
}
