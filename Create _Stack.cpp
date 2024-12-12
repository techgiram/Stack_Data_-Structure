#include <iostream>
#include <vector>

using namespace std;

class Stack {
public:
    void push(int val) {
        vec.push_back(val);
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return; // Avoid returning -1, as it might be a valid element.
        }
        vec.pop_back();
    }

    int top() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            // Consider throwing an exception for robust error handling.
            return -1; // Or throw an exception for clarity.
        }
        return vec[vec.size() - 1]; // Direct access for efficiency
    }

    bool isEmpty() {
        return vec.size() == 0;
    }

private:
    vector<int> vec;
};

int main() {
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
