// 22. Generate Parentheses
// Medium
// Topics
// premium lock icon
// Companies
// Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

// Example 1:

// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
// Example 2:

// Input: n = 1
// Output: ["()"]


#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generate(int n, int open, int close,
              string current, vector<string>& ans) {

    if (current.length() == 2 * n) {
        ans.push_back(current);
        return;
    }

    if (open < n) {
        generate(n, open + 1, close,
                 current + "(", ans);
    }

    if (close < open) {
        generate(n, open, close + 1,
                 current + ")", ans);
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    generate(n, 0, 0, "", ans);
    return ans;
}

int main() {
    int n = 3;

    vector<string> result = generateParenthesis(n);

    cout << "Generated Parentheses:" << endl;

    for (string s : result) {
        cout << s << endl;
    }

    return 0;
}