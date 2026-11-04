// 147. Insertion Sort List
// Medium
// Topics
// premium lock icon
// Companies
// Given the head of a singly linked list, sort the list using insertion sort, and return the sorted list's head.

// The steps of the insertion sort algorithm:

// Insertion sort iterates, consuming one input element each repetition and growing a sorted output list.
// At each iteration, insertion sort removes one element from the input data, finds the location it belongs within the sorted list and inserts it there.
// It repeats until no input elements remain.
// The following is a graphical example of the insertion sort algorithm. The partially sorted list (black) initially contains only the first element in the list. One element (red) is removed from the input data and inserted in-place into the sorted list with each iteration.

// Example 1:


// Input: head = [4,2,1,3]
// Output: [1,2,3,4]
// Example 2:


// Input: head = [-1,5,3,4,0]
// Output: [-1,0,3,4,5]


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

// Insertion Sort Function
ListNode* insertionSortList(ListNode* head) {

    ListNode dummy(0);

    ListNode* curr = head;

    while (curr != nullptr) {

        ListNode* nextNode = curr->next;

        ListNode* prev = &dummy;

        while (prev->next != nullptr &&
               prev->next->val <= curr->val) {

            prev = prev->next;
        }

        curr->next = prev->next;
        prev->next = curr;

        curr = nextNode;
    }

    return dummy.next;
}

// Print Linked List
void printList(ListNode* head) {

    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    ListNode* head = new ListNode(4);
    head->next = new ListNode(2);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(3);

    cout << "Original List: ";
    printList(head);

    head = insertionSortList(head);

    cout << "Sorted List: ";
    printList(head);

    return 0;
}
