#include <iostream>
using namespace std;

template<typename T>
class CustomStack {
private:
    static const int MAX_STACK_SIZE = 100;
    int top = -1;
    T arr[MAX_STACK_SIZE];

public:
    void push(const T& value) {
        if (top == MAX_STACK_SIZE - 1) {
            cout << "\nERROR: Stack overflow.\n";
            return;
        }
        arr[++top] = value;
        cout << "\nValue " << arr[top] << " pushed into stack.\n";
    }

    T peek() {
        if (isEmpty()) {
            cout << "\nERROR: Stack is empty.\n";
            return T();  
        }
        return arr[top];
    }

    void pop() {
        if (isEmpty()) {
            cout << "\nERROR: Stack Underflow.\n";
            return;
        }
        cout << "\nValue " << arr[top] << " popped from stack.\n";
        top--;
    }

    bool isEmpty() {
        return top == -1;
    }

    void display() {
        if (isEmpty()) {
            cout << "\nStack is empty.\n";
            return;
        }
        cout << "\nStack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
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
