// 946. Validate Stack Sequences
// Medium
// Topics
// premium lock icon
// Companies
// Given two integer arrays pushed and popped each with distinct values, return true if this could have been the result of a sequence of push and pop operations on an initially empty stack, or false otherwise.

 

// Example 1:

// Input: pushed = [1,2,3,4,5], popped = [4,5,3,2,1]
// Output: true
// Explanation: We might do the following sequence:
// push(1), push(2), push(3), push(4),
// pop() -> 4,
// push(5),
// pop() -> 5, pop() -> 3, pop() -> 2, pop() -> 1
// Example 2:

// Input: pushed = [1,2,3,4,5], popped = [4,3,5,1,2]
// Output: false
// Explanation: 1 cannot be popped before 2.


#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

    stack<int> st;
    int j = 0;

    for (int i = 0; i < pushed.size(); i++) {

        st.push(pushed[i]);

        while (!st.empty() && st.top() == popped[j]) {
            st.pop();
            j++;
        }
    }

    return st.empty();
}

int main() {

    vector<int> pushed = {1, 2, 3, 4, 5};
    vector<int> popped = {4, 5, 3, 2, 1};

    if (validateStackSequences(pushed, popped)) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}
