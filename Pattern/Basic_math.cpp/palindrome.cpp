// Problem Statement: Given an integer N, return true if it is a palindrome else return false.
// Examples
// Example 1:
// Input:N = 4554
// Output:Palindrome Number
// Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number

// Example 2:
// Input:N = 7789
// Output: Not Palindrome
// Explanation: The reverse of number 7789 is 9877 and therefore it is not palindrome

// Simle code
/*#include <iostream>
using namespace std;
int main()
{
    int n = 4554;
    int revnum = 0;
    int dup = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        revnum = revnum * 10 + lastdigit;
        n = n / 10;
    }
    if (revnum == dup)
    {
        cout << "Palindrome Number" << endl;
    }
    else
    {
        cout << "Not Plaindrome number";
    }
}*/

#include <iostream>
using namespace std;

// Function to check if a given integer is a palindrome
bool palindrome(int n) {
    int revNum = 0; // Initialize a variable to store the reverse of the number
    int dup = n; // Create a duplicate variable to store the original number

    // Iterate through each digit of the number until it becomes 0
    while (n > 0) {
        int ld = n % 10; // Extract the last digit of the number
        revNum = (revNum * 10) + ld; // Build the reverse number by appending the last digit
        n = n / 10; // Remove the last digit from the original number
    }

    // Check if the original number is equal to its reverse
    if (dup == revNum) {
        return true; // If equal, return true indicating it's a palindrome
    } else {
        return false; // If not equal, return false indicating it's not a palindrome
    }
}

int main() {
    int number = 4554; // Example number

    if (palindrome(number)) { // Check if the number is a palindrome
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}

// Time Complexity: O(log10N + 1), as in the worst case when N is a multiple of 10 the number of digits in N is log10 N + 1. In the while loop we divide N by 10 until it becomes 0 which takes log10N iterations. In each iteration of the while loop we perform constant time operations like modulus and division and pushing elements into the vector.

// Space Complexity: O(1), as only a constant amount of additional memory for the reversed number regardless of size of the input number