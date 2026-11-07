
// Problem List
// Debugging...
// Debugging...










// 0

// avatar
// Avatar
// Rahul Kumar
// Access all features with our Premium subscription!
// myLists
// My Lists
// favorites
// Favorites
// notebook
// Notebook
// progress
// Progress
// points
// Points
// Try New Features
// Orders
// My Playgrounds
// Settings
// Appearance
// Sign Out
// Premium
// Description
// Editorial
// Editorial
// Solutions
// Solutions
// Submissions
// Submissions
// Code
// Testcase
// Testcase
// Test Result
// 895. Maximum Frequency Stack
// Hard
// Topics
// premium lock icon
// Companies
// Design a stack-like data structure to push elements to the stack and pop the most frequent element from the stack.

// Implement the FreqStack class:

// FreqStack() constructs an empty frequency stack.
// void push(int val) pushes an integer val onto the top of the stack.
// int pop() removes and returns the most frequent element in the stack.
// If there is a tie for the most frequent element, the element closest to the stack's top is removed and returned.
 

// Example 1:

// Input
// ["FreqStack", "push", "push", "push", "push", "push", "push", "pop", "pop", "pop", "pop"]
// [[], [5], [7], [5], [7], [4], [5], [], [], [], []]
// Output
// [null, null, null, null, null, null, null, 5, 7, 5, 4]

// Explanation
// FreqStack freqStack = new FreqStack();
// freqStack.push(5); // The stack is [5]
// freqStack.push(7); // The stack is [5,7]
// freqStack.push(5); // The stack is [5,7,5]
// freqStack.push(7); // The stack is [5,7,5,7]
// freqStack.push(4); // The stack is [5,7,5,7,4]
// freqStack.push(5); // The stack is [5,7,5,7,4,5]
// freqStack.pop();   // return 5, as 5 is the most frequent. The stack becomes [5,7,5,7,4].
// freqStack.pop();   // return 7, as 5 and 7 is the most frequent, but 7 is closest to the top. The stack becomes [5,7,5,4].
// freqStack.pop();   // return 5, as 5 is the most frequent. The stack becomes [5,7,4].
// freqStack.pop();   // return 4, as 4, 5 and 7 is the most frequent, but 4 is closest to the top. The stack becomes [5,7].


#include <iostream>
#include <unordered_map>
#include <stack>
#include <algorithm>
using namespace std;

class FreqStack {
private:
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> group;
    int maxFreq;

public:
    FreqStack() {
        maxFreq = 0;
    }

    void push(int val) {
        int f = ++freq[val];

        maxFreq = max(maxFreq, f);

        group[f].push(val);
    }

    int pop() {
        int val = group[maxFreq].top();

        group[maxFreq].pop();

        freq[val]--;

        if (group[maxFreq].empty()) {
            maxFreq--;
        }

        return val;
    }
};

int main() {

    FreqStack freqStack;

    freqStack.push(5);
    freqStack.push(7);
    freqStack.push(5);
    freqStack.push(7);
    freqStack.push(4);
    freqStack.push(5);

    cout << freqStack.pop() << endl;
    cout << freqStack.pop() << endl;
    cout << freqStack.pop() << endl;
    cout << freqStack.pop() << endl;

    return 0;
}
