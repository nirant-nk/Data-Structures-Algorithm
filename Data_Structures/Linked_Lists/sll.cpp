#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    // Function to insert a node at any position
    void insertNode(int value, int position) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (position == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 1; temp != nullptr && i < position - 1; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout<<"Position out of range. Inserting at the end.\n";
        } else {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    void deleteNode(int value) {
        Node* temp = head;
        Node* prev = nullptr;

        // If the head has key
        if (temp != nullptr && temp->data == value) {
            head = temp->next;
            delete temp;
            cout << "Node with value " << value << " deleted.\n";
            return;
        }

        // Search for the key
        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        // Key not present
        if (temp == nullptr) {
            cout << "Node with value " << value << " not found.\n";
            return;
        }
        
        prev->next = temp->next;
        delete temp;
        cout << "Node with value " << value << " deleted.\n";
    }

    void displayList() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        cout << "Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    SinglyLinkedList list;
    int choice, value, position;

    do {
        cout << "\n--- Singly Linked List Menu ---\n";
        cout << "1. Insert a node\n";
        cout << "2. Delete a node by value\n";
        cout << "3. Display list\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to insert: ";
                cin >> value;
                cout << "Enter the position to insert (1 for beginning): ";
                cin >> position;
                list.insertNode(value, position);
                break;

            case 2:
                cout << "Enter the value to delete: ";
                cin >> value;
                list.deleteNode(value);
                break;

            case 3:
                list.displayList();
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}