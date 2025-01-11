#include <iostream>
using namespace std;

template<typename T>
struct Node{
    T data;
    Node<T>* next;

    public:
     Node(const T& data): data(data) {};
};

template<typename T>
class CustomStack {
private:
    Node<T>* top;
    size_t size;

public:
    CustomStack() : top(nullptr), size(0) {};
    void push(const T& value) {

        Node<T>* newNode = new Node<T>(value);

        newNode->next = top;
        top = newNode;
        cout << "\nValue " << top->data << " pushed into stack.\n";

        size++;
    }

    T peek() {
        if (isEmpty()) {
            cout << "\nERROR: Stack is empty.\n";
            return T();  
        }
        return top->data;
    }

    void pop() {
        if (isEmpty()) {
            cout << "\nERROR: Stack Underflow.\n";
            return;
        }
        Node<T>* temp = top;
        top = top->next;
        cout << "\nValue " << temp->data << " popped from stack.\n";
        delete temp;
        size--;
    }

    bool isEmpty() {
        return size == 0;
    }

    void display() {
        if (isEmpty()) {
            cout << "\nStack is empty.\n";
            return;
        }
        Node<T>* temp = top;
        cout << "\nStack elements are: ";
        for (int i = size; i > 0; i--) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    CustomStack<int> s;
    int choice = 0;

    do {
        cout << "\n----- Stack Array Menu -----";
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Peek";
        cout << "\n4. Display";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "\nEnter a value: ";
                cin >> value;
                s.push(value);
                break;
            }
            case 2:
                s.pop();
                break;
            case 3: {
                int topValue = s.peek();
                if (!s.isEmpty()) {
                    cout << "\nTop value is: " << topValue << "\n";
                }
                break;
            }
            case 4:
                s.display();
                break;
            case 5:
                cout << "\nExiting...\n";
                break;
            default:
                cout << "\nInvalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
