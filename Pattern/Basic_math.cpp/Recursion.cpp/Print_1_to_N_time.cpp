// Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.

// You must not use any loops such as for, while, or do-while.
// The function should print each number on a separate line, in increasing order from 1 to n.

// Example 1

// Input: n = 5

// Output:

// 1  

// 2  

// 3  

// 4  

// 5

// Example 2

// Input: n = 1

// Output:

// 1


#include<iostream>
using namespace std;

int count(int i, int n){
    if( i> n)
    return i;
    cout<< i << endl;
    count(i+1,n);
}

int main(){
    int n;
    cin >> n;
    count(1,n);
}
 
 