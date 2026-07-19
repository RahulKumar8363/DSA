// Problem Statement: Given an integer N return the reverse of the given number.
// Examples
// Input: N = 12345
// Output:54321
// Explanation: The reverse of 12345 is 54321.

// Input: N = 7789                
// Output: 9877
// Explanation: The reverse of number 7789 is 9877.

// Basic method Use
// #include<iostream>
// using namespace std;
// int main(){
//     int n =12345;
//     int rev=0;
//     while(n >0){
//         int lastdigit=n%10;
//         rev=(rev * 10)+ lastdigit;
//         n=n/10;
//     }
//     cout << rev << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse digits of a number
    int reverseNumber(int n) {
        // Variable to store reversed number
        int revNum = 0;

        // Loop until all digits are processed
        while (n > 0) {
            // Get the last digit
            int lastDigit = n % 10;

            // Append it to the reversed number
            revNum = revNum * 10 + lastDigit;

            // Remove the last digit from n
            n = n / 10;
        }

        // Return the reversed number
        return revNum;
    }
};

// Driver code
int main() {
    Solution obj;
    int num = 12345;
    cout << obj.reverseNumber(num) << endl;  // Output: 54321
    return 0;
}

// Time Complexity: O(log₁₀N),The number of iterations in the loop depends on the number of digits in the number N. Since each digit is processed once using constant time operations (modulo, division, multiplication, and addition), the total time taken is proportional to the number of digits, which is log₁₀N.

// Space Complexity: O(1),Only a constant number of variables are used regardless of the size of the input number.
