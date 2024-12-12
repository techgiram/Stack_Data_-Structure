#include <iostream>
#include <vector>

using namespace std;

// Create stack using vector
template <typename T>
class Stack {
public:
    void push(const T& val) {
        vec.push_back(val);
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return; // Avoid returning -1, as it might be a valid element.
        }
        vec.pop_back();
    }

    T top() const {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            // Consider throwing an exception for robust error handling.
            return T(); // Or throw an exception for clarity.
        }
        return vec.back(); // Use vec.back() for direct access
    }

    bool isEmpty() const {
        return vec.empty(); // Use vec.empty() for a more concise check
    }

private:
    vector<T> vec;
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
