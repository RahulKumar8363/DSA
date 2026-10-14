// Remove Nth Reound From List
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:

// Input: head = [1], n = 1
// Output: []
// Example 3:

// Input: head = [1,2], n = 1
// Output: [1]
 

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;

        ListNode* result = dummy->next;
        delete dummy;

        return result;
    }
};

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 2;

    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;

    for (int i = 1; i < 5; i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }

    Solution obj;
    head = obj.removeNthFromEnd(head, n);

    while (head != nullptr) {
        cout << head->val << " ";

        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    cout << endl;
    return 0;
}
