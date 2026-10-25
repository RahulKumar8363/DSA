// Example 1:

// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/3 = 3.33333.. which is truncated to 3.
// Example 2:

// Input: dividend = 7, divisor = -3
// Output: -2
// Explanation: 7/-3 = -2.33333.. which is truncated to -2.  give me both code vscode and leet code

#include <iostream>
#include <climits>
using namespace std;

int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }

    long long a = dividend;
    long long b = divisor;

    bool negative = (a < 0) != (b < 0);

    a = abs(a);
    b = abs(b);

    long long result = 0;

    while (a >= b) {
        long long temp = b;
        long long multiple = 1;

        while (a >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }

        a -= temp;
        result += multiple;
    }

    if (negative) {
        result = -result;
    }

    return (int)result;
}

int main() {
    int dividend, divisor;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    if (divisor == 0) {
        cout << "Divisor cannot be zero." << endl;
        return 0;
    }

    cout << "Quotient: " << divide(dividend, divisor) << endl;

    return 0;
}
