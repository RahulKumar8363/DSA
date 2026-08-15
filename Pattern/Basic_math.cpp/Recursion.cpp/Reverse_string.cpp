// Example 1

// Input : s = "hannah"

// Output : true

// Explanation : The string when reversed is --> "hannah", which is same as original string , so we return true.

// Example 2

// Input : s = "aabbaA"

// Output : false

// Explanation : The string when reversed is --> "Aabbaa", which is not same as original string, So we return false.

// brute force apprach

// #include <bits/stdc++.h>
// using namespace std;

// // Function to check if a string is a palindrome
// bool isPalindrome(string s) {
//     int left = 0, right = s.length() - 1;

//     // Loop to check if the string is a palindrome
//     while (left < right) {
//         // Skip non-alphanumeric characters on the left side
//         if (!isalnum(s[left])) 
//             left++;
//         // Skip non-alphanumeric characters on the right side
//         else if (!isalnum(s[right])) 
//             right--;
//         // If characters are different, it's not a palindrome
//         else if (tolower(s[left]) != tolower(s[right])) 
//             return false;
//         else {
//             // Move towards the middle if characters are the same
//             left++; 
//             right--;
//         }
//     }
//     return true;  // The string is a palindrome if the loop completes
// }

// int main() {
//     string str = "ABCDCBA";  // String to check for palindrome
//     bool ans = isPalindrome(str);  // Check if the string is a palindrome

//     // Output the result
//     if (ans == true) {
//         cout << "Palindrome";
//     } else {
//         cout << "Not Palindrome";
//     }

//     return 0;
// }

// Complexity Analysis

// Time Complexity: O(N), where N is the length of the string. Each character is compared at most once till the middle of the string.

// Space Complexity: O(1), since no extra space is used apart from a few variables for iteration.


//optimal approach

#include<bits/stdc++.h>
using namespace std;

// Function to check if a string is a palindrome using recursion
bool palindrome(int i, string& s) {
    // Base Condition: If i exceeds half of the string, all the elements have been compared
    // and the string is a palindrome, return true.
    if (i >= s.length() / 2) return true;

    // If the start and end characters are not equal, it's not a palindrome.
    if (s[i] != s[s.length() - i - 1]) return false;

    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome(i + 1, s);
}

int main() {
    // Example string.
    string s = "madam";
    
    // Check if the string is a palindrome and output the result
    cout << palindrome(0, s);  // Output 1 if palindrome, 0 if not
    cout << endl;
    return 0;
}


// Complexity Analysis

// Time Complexity: O(N), where N is the length of the string. Each character is checked once.

// Space Complexity: O(N), due to the recursion stack in the worst case (no early termination).