// [**148. Sort List**](https://leetcode.com/problems/sort-list/)

// Medium

// Topics

// [premium lock icon](https://leetcode.com/_next/static/images/lock-a6627e2c7fa0ce8bc117c109fb4e567d.svg)Companies

// Given the `head` of a linked list, return *the list after sorting it in **ascending order***.



// **Example 1:**

// [image](https://assets.leetcode.com/uploads/2020/09/14/sort_list_1.jpg)

// **Input:** head = [4,2,1,3] **Output:** [1,2,3,4]&#x20;

// **Example 2:**

// [image](https://assets.leetcode.com/uploads/2020/09/14/sort_list_2.jpg)

// **Input:** head = [-1,5,3,4,0] **Output:** [-1,0,3,4,5]&#x20;

// **Example 3:**

// **Input:** head = [] **Output:** []&#x20;



// **Constraints:**

// - The number of nodes in the list is in the range `[0, 5 * 104]`.
// - `-105 <= Node.val <= 105`



// **Follow up:** Can you sort the linked list in `O(n logn)` time and `O(1)` memory (i.e. constant space)?


#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

ListNode* merge(ListNode* left, ListNode* right) {
    ListNode dummy(0);
    ListNode* tail = &dummy;

    while (left != nullptr && right != nullptr) {
        if (left->val <= right->val) {
            tail->next = left;
            left = left->next;
        } else {
            tail->next = right;
            right = right->next;
        }

        tail = tail->next;
    }

    if (left != nullptr)
        tail->next = left;
    else
        tail->next = right;

    return dummy.next;
}

ListNode* sortList(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
        return head;

    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = nullptr;

    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = nullptr;

    ListNode* left = sortList(head);
    ListNode* right = sortList(slow);

    return merge(left, right);
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        ListNode* node = new ListNode(x);

        if (head == nullptr) {
            head = node;
            tail = node;
        } else {
            tail->next = node;
            tail = node;
        }
    }

    head = sortList(head);

    cout << "Sorted list: ";

    ListNode* current = head;

    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }

    cout << endl;

    // Free allocated memory
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
