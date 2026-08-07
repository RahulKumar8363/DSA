// Given an integer n, write a function to print all numbers from n to 1 (inclusive) using recursion.

// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in decreasing order from n to 1

// Example 1

// Input: 5

// Output:

// 5

// 4

// 3

// 2

// 1

// #include<iostream>
// using namespace std;

// int revNum(int i ,int n){
//     if(i < 1)
//     return 0;
//     cout << i << endl;
//     revNum(i - 1, n);
// }

// int main(){
//     int n = 5;
//     revNum(n,n);
// }

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Recursive function to print numbers from current down to 1 using backtracking
    void printNumbers(int current) {
        // Base case: if current is less than 1, stop recursion
        if (current < 1)
            return;

        // Recursive call with previous number
        printNumbers(current - 1);

        // Print current number during backtracking
        cout << current << endl;
    }
};

int main() {
    Solution sol;
    int n = 10;

    sol.printNumbers(n);
    cout << "\n";

    return 0;
}
