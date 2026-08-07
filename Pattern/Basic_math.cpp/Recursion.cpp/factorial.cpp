// You are given an integer n. Return the value of n! or n factorial.



// Factorial of a number is the product of all positive integers less than or equal to that number.


// Example 1

// Input: n = 2

// Output: 2

// Explanation: 2! = 1 * 2 = 2.

// Example 2

// Input: n = 0

// Output: 1

// Explanation: 0! is defined as 1.


#include<iostream>
using namespace std;

int factNUm(int i , int fact){
    if(i < 1){
        cout << fact;
        return 1;
    }
    factNUm(i-1, fact * i);
}
int main(){
    int n=5;
    factNUm(n,1);
}