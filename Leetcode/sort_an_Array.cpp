// **Example 1:**

// ```
// Input: nums = [5,2,3,1]
// Output: [1,2,3,5]
// Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).

// ```

// **Example 2:**

// ```
// Input: nums = [5,1,1,2,0,0]
// Output: [0,0,1,1,2,5]
// Explanation: Note that the values of nums are not necessarily unique. first leet code then vs code
// ```

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());

    cout << "Sorted array: ";
    for (int x : nums)
        cout << x << " ";

    return 0;
}