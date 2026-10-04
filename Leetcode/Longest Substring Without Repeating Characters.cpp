// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastIndex;

    int maxLen = 0;
    int l = 0;

    for (int r = 0; r < s.size(); r++) {
        char c = s[r];

        if (lastIndex.find(c) != lastIndex.end() && lastIndex[c] >= l) {
            l = lastIndex[c] + 1;
        }

        lastIndex[c] = r;
        maxLen = max(maxLen, r - l + 1);
    }

    return maxLen;
}

int main() {
    string s;

    cout << "Enter string: ";
    getline(cin, s);   // ✅ FIX HERE

    cout << "Output: " << lengthOfLongestSubstring(s) << endl;

    return 0;
}