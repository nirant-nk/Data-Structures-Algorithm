#include <iostream>
#include <stdexcept>
using namespace std;

// CustomQueue Implementation
template <typename T>
class CustomQueue
{
private:
    struct Node
    {
        T data;
        Node *next;
        Node(T value) : data(value), next(nullptr) {}
    };

    Node *front; // Points to the front node
    Node *rear;  // Points to the rear node
    size_t size; // Tracks the number of elements in the queue

public:
    CustomQueue() : front(nullptr), rear(nullptr), size(0) {}

    ~CustomQueue()
    {
        while (!isEmpty())
        {
            dequeue();
        }
    }

    void enqueue(const T &value)
    {
        Node *newNode = new Node(value);
        if (rear)
        {
            rear->next = newNode;
        }
        rear = newNode;
        if (!front)
        {
            front = rear;
        }
        ++size;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            throw underflow_error("Queue is empty");
        }
        Node *temp = front;
        front = front->next;
        if (!front)
        {
            rear = nullptr;
        }
        delete temp;
        --size;
    }

    T peek() const
    {
        if (isEmpty())
        {
            throw underflow_error("Queue is empty");
        }
        return front->data;
    }

    bool isEmpty() const
    {
        return size == 0;
    }

    size_t getSize() const
    {
        return size;
    }
};

// CustomStack Implementation
template <typename T>
class CustomStack
{
private:
    struct Node
    {
        T data;
        Node *next;
        Node(T value) : data(value), next(nullptr) {}
    };
    Node *top;
    size_t size;

public:
    CustomStack() : top(nullptr), size(0) {}

    ~CustomStack()
    {
        while (!isEmpty())
        {
            pop();
        }
    }

    void push(const T &value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        ++size;
    }

    T pop()
    {
        if (isEmpty())
        {
            throw underflow_error("Stack is empty");
        }
        Node *temp = top;
        T data = top->data;
        top = top->next;
        delete temp;
        --size;
        return data;
    }

    bool isEmpty() const
    {
        return size == 0;
    }
};

// Node for BinaryTree
template <typename T>
class Node
{
public:
    T data;
    Node *left;
    Node *right;

    Node(const T &data) : data(data), left(nullptr), right(nullptr) {}
};

// BinaryTree Implementation
template <typename T>
class BinaryTree
{
private:
    Node<T> *root;
    int idx = -1;

public:
    BinaryTree() : root(nullptr) {}

    Node<T> *buildBTree(const T nodes[])
    {
        idx++;
        if (nodes[idx] == -1)
        {
            return nullptr;
        }

        Node<T> *newNode = new Node<T>(nodes[idx]);
        newNode->left = buildBTree(nodes);
        newNode->right = buildBTree(nodes);
        return newNode;
    }

    void inOrderTraversal(Node<T> *root){
        if (root == nullptr)
        {
            return;
        }
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
    void customInorderTraversal(Node<T> *root){
        if(root == nullptr) return;
        CustomStack<Node<T> *> s;
        
        Node<T>* curr = root;
        while(curr!=nullptr || !s.isEmpty()){
            while(curr!=nullptr){
                s.push(curr);
                curr = curr->left;
            }
            if(!s.isEmpty()){
                curr = s.pop();
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
    void preOrderTraversal(Node<T> *root){
        if (root == nullptr)
        {
            return;
        }
        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }

    void customPreOrderTraversal(Node<T> *root){
        if (root == nullptr)
        {
            return;
        }
        CustomStack<Node<T> *> s;
        s.push(root);
        while (!s.isEmpty())
        {
            Node<T> *curr = s.pop();
            cout << curr->data << " ";
            if (curr->right)
            {
                s.push(curr->right);
            }
            if (curr->left)
            {
                s.push(curr->left);
            }
        }
    }

    void postOrderTraversal(Node<T> *root){
        if (root == nullptr)
        {
            return;
        }
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
    }
    void customPostOrderTraversal(Node<T> *root) {
        if (root == nullptr) return;

        CustomStack<Node<T> *> s;
        Node<T> *prev = nullptr;

        s.push(root);
        while (!s.isEmpty()) {
            Node<T> *curr = s.pop();

            // If current node has no children or children are already processed
            if (!curr->left && !curr->right || 
                (prev && (prev == curr->left || prev == curr->right))) {
                cout << curr->data << " ";
                prev = curr; // Mark current as processed
            } else {
                // Push current node back and process its children
                s.push(curr);
                if (curr->right) s.push(curr->right);
                if (curr->left) s.push(curr->left);
            }
        }
    }

    void levelTraversal(Node<T> *root)
    {
        if (root == nullptr)
        {
            return;
        }
        CustomQueue<Node<T> *> q;
        q.enqueue(root);
        while (!q.isEmpty())
        {
            Node<T> *curr = q.peek();
            q.dequeue();
            cout << curr->data << " ";
            if (curr->left)
            {
                q.enqueue(curr->left);
            }
            if (curr->right)
            {
                q.enqueue(curr->right);
            }
        }
    }
};

int main()
{
    int nodes[] = {1,2,3,-1,-1,4,-1,-1,5,-1,6,-1,-1};
    BinaryTree<int> tree;
    Node<int> *root = tree.buildBTree(nodes);

    cout << "InOrder Traversal: ";
    tree.inOrderTraversal(root);
    cout << "\ncustomInOrder Traversal: ";
    tree.customInorderTraversal(root);
    cout << "\nPreOrder Traversal: ";
    tree.preOrderTraversal(root);
    cout << "\nCustom PreOrder Traversal: ";
    tree.customPreOrderTraversal(root);
    cout << "\nPostOrder Traversal: ";
    tree.postOrderTraversal(root);
    cout << "\ncustomPostOrder Traversal: ";
    tree.customPostOrderTraversal(root);
    
    cout << "\nLevelOrder Traversal: ";
    tree.levelTraversal(root);
    cout << "\n";

    return 0;
}
