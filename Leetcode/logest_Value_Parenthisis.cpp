// Longest Valid Parentheses
// Hard
// Topics
// premium lock icon
// Companies
// Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses substring.

 

// Example 1:

// Input: s = "(()"
// Output: 2
// Explanation: The longest valid parentheses substring is "()".
// Example 2:

// Input: s = ")()())"
// Output: 4
// Explanation: The longest valid parentheses substring is "()()".
// Example 3:

// Input: s = ""
// Output: 0

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1); 
        int maxLength = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                st.pop(); 
                
                if (st.empty()) {
                    st.push(i);
                } else {
                    maxLength = max(maxLength, i - st.top());
                }
            }
        }

        return maxLength;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    string s1 = "(()";
    cout << "Test 1 (\"(()\"): " << sol.longestValidParentheses(s1) << endl; 
    // Expected Output: 2 ("()")

    // Test Case 2
    string s2 = ")()())";
    cout << "Test 2 (\")()())\"): " << sol.longestValidParentheses(s2) << endl; 
    // Expected Output: 4 ("()()")

    // Test Case 3
    string s3 = "";
    cout << "Test 3 (\"\"): " << sol.longestValidParentheses(s3) << endl; 
    // Expected Output: 0

    return 0;
}