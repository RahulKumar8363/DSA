// **Example 1:**

// ```
// Input: s = "III"
// Output: 3
// Explanation: III = 3.

// ```

// **Example 2:**

// ```
// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.

// ```

// **Example 3:**

// ```
// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
// ```

#include <iostream>
using namespace std;

class Solution {
public:
    int value(char c) {
        if (c == 'I') return 1;
        if (c == 'V') return 5;
        if (c == 'X') return 10;
        if (c == 'L') return 50;
        if (c == 'C') return 100;
        if (c == 'D') return 500;
        if (c == 'M') return 1000;
        return 0;
    }

    int romanToInt(string s) {
        int sum = 0;

        for (int i = 0; i < s.size(); i++) {
            int curr = value(s[i]);

            if (i + 1 < s.size() && curr < value(s[i + 1])) {
                sum -= curr;
            } else {
                sum += curr;
            }
        }

        return sum;
    }
};

int main() {
    string s;

    cout << "Enter Roman Number: ";
    cin >> s;

    Solution obj;
    int ans = obj.romanToInt(s);

    cout << "Integer Value: " << ans << endl;

    return 0;
}