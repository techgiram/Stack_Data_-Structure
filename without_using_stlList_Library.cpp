#include <iostream>
#include <vector>  // Not needed for this code, but uncomment if you plan to use it
#include <string>  // Not needed for this code, but uncomment if you plan touse it

using namespace std;

template <typename T>  // Use typename instead of class for modern C++
class Node {
public:
    T data;
    Node<T>* next;

    Node(T val) {
        data = val;
        next = NULL;  // Use nullptr for modern C++
    }
};

template <typename T>
class Stack {  // Use PascalCase for class names
public:
    Node<T>* head = NULL;  // Initialize head to nullptr in the constructor

    Stack() {}  // Empty constructor

    void push(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (head == NULL) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" << endl;  // Handle empty stack case
            return;
        }

        Node<T>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    T top() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;  // Handle empty stack case
            return T();  // Return a default value (e.g., 0 for int)
        }
        return head->data;
    }

    bool isEmpty() {
        return head == NULL;
    }
};

int main() {
    Stack<int> s;  // Use Stack instead of stack

    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
