// 25. Reverse Nodes in k-Group
// Hard
// Topics
// premium lock icon
// Companies
// Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

// You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

// Example 1:


// Input: head = [1,2,3,4,5], k = 2
// Output: [2,1,4,3,5]
// Example 2:


// Input: head = [1,2,3,4,5], k = 3
// Output: [3,2,1,4,5]
 

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;

        // Check whether k nodes are available
        while (curr != nullptr && count < k) {
            curr = curr->next;
            count++;
        }

        // Reverse only if k nodes are available
        if (count == k) {
            curr = reverseKGroup(curr, k);

            while (count > 0) {
                ListNode* temp = head->next;
                head->next = curr;
                curr = head;
                head = temp;
                count--;
            }

            head = curr;
        }

        return head;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;

    ListNode* head = new ListNode(arr[0]);
    ListNode* tail = head;

    for (int i = 1; i < arr.size(); i++) {
        tail->next = new ListNode(arr[i]);
        tail = tail->next;
    }

    Solution sol;
    head = sol.reverseKGroup(head, k);

    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }

    cout << endl;
    return 0;
}
