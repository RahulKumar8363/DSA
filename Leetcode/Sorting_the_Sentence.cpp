// Example 1:

// Input: s = "is2 sentence4 This1 a3"
// Output: "This is a sentence"
// Explanation: Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
// Example 2:

// Input: s = "Myself2 Me1 I4 and3"
// Output: "Me Myself and I"
// Explanation: Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers. 
#include <bits/stdc++.h>
using namespace std;

string sortSentence(string s) {
    vector<string> words(10); // max 9 words assumed (safe for problem)
    string word = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            word += s[i];
        } else {
            int pos = word.back() - '0'; // get number
            word.pop_back();             // remove number
            words[pos] = word;
            word = "";
        }
    }

    // last word
    int pos = word.back() - '0';
    word.pop_back();
    words[pos] = word;

    string result = "";

    for (int i = 1; i < words.size(); i++) {
        if (!words[i].empty()) {
            if (!result.empty()) result += " ";
            result += words[i];
        }
    }

    return result;
}

int main() {
    string s;

    cout << "Enter string: ";
    getline(cin, s);

    string ans = sortSentence(s);

    cout << "Output: " << ans << endl;

    return 0;
}