#include<iostream>
#include<stack>
#include<string>
using namespace std;

string reverseString(string str) {
    string ans;
    stack<char> s;
    
    // Pushing all characters to stack
    for (int i = 0; i < str.size(); i++) {
        s.push(str[i]);
    }
    
    // Popping characters from the stack to reverse the string
    while (!s.empty()) {
        char top = s.top();
        ans += top;
        s.pop();
    }
    return ans;
}

int main() {
    string str = "abcd"; // Corrected 'sting' to 'string'
    cout << "Reverse = " << reverseString(str) << endl; // Corrected 'end' to 'endl'
    return 0;
}

                              
                                 
       

