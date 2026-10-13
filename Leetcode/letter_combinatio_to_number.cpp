// [**17. Letter Combinations of a Phone Number**](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)

// Medium

// Topics

// [premium lock icon](https://leetcode.com/_next/static/images/lock-a6627e2c7fa0ce8bc117c109fb4e567d.svg)Companies

// Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent. Return the answer in **any order**.

// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

// [image](https://assets.leetcode.com/uploads/2022/03/15/1200px-telephone-keypad2svg.png)



// **Example 1:**

// **Input:** digits = "23" **Output:** ["ad","ae","af","bd","be","bf","cd","ce","cf"]&#x20;

// **Example 2:**

// **Input:** digits = "2" **Output:** ["a","b","c"]&#x20;



// **Constraints:**

// - `1 <= digits.length <= 4`
// - `digits[i]` is a digit in the range `['2', '9']`. bhai code de leetcode and vs code



#include <iostream>
#include <vector>
#include <string>
using namespace std;

void backtrack(string &digits, int index, string &current,
               vector<string> &ans, vector<string> &phone) {
    if (index == digits.size()) {
        ans.push_back(current);
        return;
    }

    string letters = phone[digits[index] - '0'];

    for (char ch : letters) {
        current.push_back(ch);

        backtrack(digits, index + 1, current, ans, phone);

        current.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    if (digits.empty()) {
        return {};
    }

    vector<string> phone = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    vector<string> ans;
    string current = "";

    backtrack(digits, 0, current, ans, phone);

    return ans;
}

int main() {
    string digits;

    cout << "Enter digits (2-9): ";
    cin >> digits;

    vector<string> result = letterCombinations(digits);

    cout << "Letter combinations: ";

    for (string s : result) {
        cout << s << " ";
    }

    cout << endl;

    return 0;
}
