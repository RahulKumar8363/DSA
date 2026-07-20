// Find GCD of two numbers


// 30

// Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

// Examples
// Example 1:
// Input: N1 = 9, N2 = 12

// Output: 3
// Explanation:
// Factors of 9: 1, 3, 9
// Factors of 12: 1, 2, 3, 4, 6, 12
// Common Factors: 1, 3
// Greatest common factor: 3 (GCD)

// Example 2:
// Input: N1 = 20, N2 = 15

// Output: 5
// Explanation:
// Factors of 20: 1, 2, 4, 5, 10, 20
// Factors of 15: 1, 3, 5, 15
// Common Factors: 1, 5
// Greatest common factor: 5 (GCD)

// Brute Force Apprach
                                

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int findGcd(int n1, int n2) {
//     // Initialize gcd to 1
//     int gcd = 1;

//     // Iterate from 1 up to
//     // the minimum of n1 and n2
//     for(int i = 1; i <= min(n1, n2); i++) {
//         // Check if i is a common
//         // factor of both n1 and n2
//         if(n1 % i == 0 && n2 % i == 0) {
//             // Update gcd to the
//             // current common factor i
//             gcd = i;
//         }
//     }

//     // Return the greatest
//     // common divisor (gcd)
//     return gcd;
// }


// int main() {
//     int n1 = 20, n2 = 15;
    
//     // Find the GCD of n1 and n2
//     int gcd = findGcd(n1, n2);

//     cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

//     return 0;
// }

//Time Complexity: O(min(N1, N2)) where N1 and N2 is the input number. The algorithm iterates from 1 to the minimum of N1 and N2 and each iteration checks whether both the numbers are divisible by the current number (constant time operations).

//Space Complexity: O(1)as the space complexity remains constant and independent of the input size. Only a fixed amount of memory is required to store the integer variables.

// Better Approch

// #include <iostream>
// #include <algorithm>

// using namespace std;

// int findGcd(int n1, int n2) {
//     // Iterate from the minimum of
//     // n1 and n2 down to 1
//     // Start from the minimum of n1 and n2
//     // because the GCD cannot
//     // exceed the smaller number
    
//     for(int i = min(n1, n2); i > 0; i--) {
//         // Check if i is a common
//         // factor of both n1 and n2
//         if(n1 % i == 0 && n2 % i == 0) {
//             // If i is a common factor,
//             // return it as the GCD
//             return i;
//         }
//     }
//     // If no common factors are found,
//     // return 1 (as 1 is always a
//     // divisor of any number)
//     return 1;
// }


// int main() {
//     int n1 = 20, n2 = 15;
    
//     // Find the GCD of n1 and n2
//     int gcd = findGcd(n1, n2);

//     cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

//     return 0;
// }

//Time Complexity: O(min(N1, N2)) where N1 and N2 is the input number. The algorithm iterates from the minimum of N1 and N2 to 1 and each iteration checks whether both the numbers are divisible by the current number (constant time operations).

//Space Complexity: O(1) as the space complexity remains constant and independent of the input size. Only a fixed amount of memory is required to store the integer variables.

                                
// Optimal Solution


#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int a, int b) {
    // Continue loop as long as both
    // a and b are greater than 0
    while(a > 0 && b > 0) {
        // If a is greater than b,
        // subtract b from a and update a
        if(a > b) {
             // Update a to the remainder
             // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else {
            // Update b to the remainder
            // of b divided by a
            b = b % a; 
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if(a == 0) {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}




int main() {
    int n1 = 20, n2 = 15;
    
    // Find the GCD of n1 and n2
    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}
 

//Time Complexity: O(log(min(N1, N2))) as the Euclidean algorithm repeatedly replaces the larger number with the remainder of dividing it by the smaller number. This rapidly reduces the problem size, requiring at most a logarithmic number of iterations.

//Space Complexity: O(1) as the space complexity remains constant and independent of the input size. Only a fixed amount of memory is required to store the integer variable
                                