
// Problem List
// Debugging...
// Debugging...










// 1

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
// 138. Copy List with Random Pointer
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.

// Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

// For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.

// Return the head of the copied linked list.

// The linked list is represented in the input/output as a list of n nodes. Each node is represented as a pair of [val, random_index] where:

// val: an integer representing Node.val
// random_index: the index of the node (range from 0 to n-1) that the random pointer points to, or null if it does not point to any node.
// Your code will only be given the head of the original linked list.

 

// Example 1:


// Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
// Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]
// Example 2:


// Input: head = [[1,1],[2,1]]
// Output: [[1,1],[2,1]]
// Example 3:



// Input: head = [[3,null],[3,0],[3,null]]
// Output: [[3,null],[3,0],[3,null]]

#include <iostream>
#include <unordered_map>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

Node* copyRandomList(Node* head) {

    if (head == NULL) {
        return NULL;
    }

    unordered_map<Node*, Node*> mp;

    Node* temp = head;

    // Step 1: Create new nodes
    while (temp != NULL) {

        mp[temp] = new Node(temp->val);

        temp = temp->next;
    }

    // Step 2: Connect pointers
    temp = head;

    while (temp != NULL) {

        mp[temp]->next = mp[temp->next];

        mp[temp]->random = mp[temp->random];

        temp = temp->next;
    }

    return mp[head];
}

int main() {

    Node* head = new Node(7);
    head->next = new Node(13);
    head->next->next = new Node(11);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(1);

    // Random pointers
    head->random = NULL;
    head->next->random = head;
    head->next->next->random = head->next->next->next->next;
    head->next->next->next->random = head->next->next;
    head->next->next->next->next->random = head;

    Node* copied = copyRandomList(head);

    Node* temp = copied;

    while (temp != NULL) {

        cout << "Value: " << temp->val << " ";

        if (temp->random != NULL) {
            cout << "Random: " << temp->random->val;
        }
        else {
            cout << "Random: NULL";
        }

        cout << endl;

        temp = temp->next;
    }

    return 0;
}