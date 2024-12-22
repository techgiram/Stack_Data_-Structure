#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

void nextGreator(vector<int> &arr, vector<int> &ans) {
    stack<int> s; // Correct type for stack
    int idx = arr.size() - 1;

    ans[idx] = -1; // Initialize the last element
    s.push(arr[idx]);

    for (idx = arr.size() - 2; idx >= 0; idx--) { // Loop from the second last element
        int curr = arr[idx];

        while (!s.empty() && curr >= s.top()) { // Fix syntax
            s.pop();
        }
        if (s.empty()) {
            ans[idx] = -1; // No greater element
        } else {
            ans[idx] = s.top(); // Assign the top element
        }
        s.push(curr); // Push the current element
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {6, 8, 0, 1, 5};
    vector<int> ans(arr.size()); // Initialize with the correct size

    nextGreator(arr, ans);

    return 0;
}
