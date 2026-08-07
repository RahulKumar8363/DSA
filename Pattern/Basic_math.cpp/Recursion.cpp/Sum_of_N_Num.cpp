// Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.


// Example 1

// Input : N = 4

// Output : 10

// Explanation : first four natural numbers are 1, 2, 3, 4.

// Sum is 1 + 2 + 3 + 4 => 10.

// Example 2

// Input : N = 2

// Output : 3

// Explanation : first two natural numbers are 1, 2.

// Sum is 1 + 2 => 3.

#include<iostream>
using namespace std;

int SumN(int i, int sum){
    if (i < 1){
    cout << sum;
    return 1;}
    SumN(i-1, sum+i);

}

int main(){
    int n=4;
    SumN(n,0);
}