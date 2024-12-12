#include <iostream>
#include <list>

using namespace std;

// Create stack using list
template <typename T>
class Stack {
public:
    void push(const T& val) {
        ll.push_front(val); 
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        ll.pop_front();
    }

    T top() const {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return T();
        }
        return ll.front(); 
    }

    bool isEmpty() const {
        return ll.empty(); 
    }

private:
    list<T> ll; 
};

int main() {
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
