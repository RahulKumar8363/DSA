// Example 1

// Input : n = 2

// Output : 1

// Explanation : F(2) = F(1) + F(0) => 1 + 0 => 1.

// Example 2

// Input : n = 3

// Output : 2

// Explanation : F(3) = F(2) + F(1) => 1 + 1 => 2.


// Brute force Apprach

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n = 5;

//     // Edge case: if n is 0, print only 0
//     if (n == 0) {
//         cout << 0;
//     }
//     // Special case: if n is 1, print first two Fibonacci numbers
//     else if (n == 1) {
//         cout << 0 << " " << 1 << "\n";
//     }
//     // General case: generate and print Fibonacci series up to nth term
//     else {
//         int fib[n + 1];    // Array to store Fibonacci numbers up to index n
//         fib[0] = 0;
//         fib[1] = 1;

//         // Fill the Fibonacci series using bottom-up dynamic programming
//         for (int i = 2; i <= n; i++) {
//             fib[i] = fib[i - 1] + fib[i - 2];
//         }

//         cout << "The Fibonacci Series up to " << n << "th term:" << endl;
//         for (int i = 0; i <= n; i++) {
//             cout << fib[i] << " ";
//         }
//     }

//     return 0;
// }


// Complexity Analysis

// Time Complexity: O(n)+O(n), for calculating and printing the Fibonacci series.

// Space Complexity: O(n) for storing the fibonacci series.



// Better Apprach

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n = 5;

//     // If n is 0, only the first Fibonacci number is printed
//     if (n == 0) {
//         cout << "The Fibonacci Series up to " << n << "th term:" << endl;
//         cout << 0;
//     }
//     else {
//         int secondLast = 0; // (i-2)th term
//         int last = 1;       // (i-1)th term

//         cout << "The Fibonacci Series up to " << n << "th term:" << endl;
//         cout << secondLast << " " << last << " ";

//         int cur; // ith term
//         for (int i = 2; i <= n; i++) {
//             cur = last + secondLast;   // ith Fibonacci number
//             secondLast = last;         // move window forward
//             last = cur;
//             cout << cur << " ";
//         }
//     }

//     return 0;
// }


// Time Complexity: O(N).As we are iterating over just one for a loop.

// Space Complexity: O(1), no extra space used.

// Optimal Apprach

#include <bits/stdc++.h>
using namespace std;

// Recursive function to compute the Nth Fibonacci number
int fibonacci(int N) {
    // Base case: if N is 0 or 1, return N itself
    if (N <= 1) {
        return N;
    }

    // Recursive case: sum of (N-1)th and (N-2)th Fibonacci numbers
    int last = fibonacci(N - 1);   // (N-1)th Fibonacci
    int slast = fibonacci(N - 2);  // (N-2)th Fibonacci

    return last + slast;
}

int main() {
    int N = 4;
    cout << fibonacci(N) << endl; // Output: 3 (0 1 1 2 3)
    return 0;
}

// Complexity Analysis

// Time Complexity: O(2^N) { This problem involves two function calls for each iteration which further expands to 4 function calls and so on which makes worst-case time complexity to be exponential in nature }.

// Space Complexity: O(N) { At maximum there could be N function calls waiting in the recursion stack since we need to calculate the Nth Fibonacci number for which we also need to calculate (N-1) Fibonacci numbers before it }.
