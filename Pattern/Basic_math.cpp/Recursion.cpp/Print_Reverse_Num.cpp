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

#include<iostream>
using namespace std;

int revNum(int i ,int n){
    if(i < 1)
    return 0;
    cout << i << endl;
    revNum(i - 1, n);
}

int main(){
    int n = 5;
    revNum(n,n);
}