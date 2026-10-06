// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.
// Example 2:

// Input: s = "cbbd"
// Output: "bb"

#include <iostream>
using namespace std;

string longestPalindrome(string s) {
    int start = 0, len = 1;

    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            int l = i, r = j;

            while (l < r && s[l] == s[r]) {
                l++;
                r--;
            }

            if (l >= r && j - i + 1 > len) {
                start = i;
                len = j - i + 1;
            }
        }
    }

    return s.substr(start, len);
}

int main() {
    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Longest Palindromic Substring: "
         << longestPalindrome(s);

    return 0;
}