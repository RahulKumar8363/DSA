// Example 1

// Input: n=5, arr = [1,2,3,4,5]

// Output: [5,4,3,2,1]

// Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

// Example 2

// Input: n=6, arr = [1,2,1,1,5,1]

// Output: [1,5,1,1,2,1]

// Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1].

// brute force approach
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Function to reverse an array
//     vector<int> reverseArray(vector<int>& arr) {
//         // Get the size of the array
//         int n = arr.size();

//         // Create a new vector to store the reversed array
//         vector<int> ans(n);

//         // Loop through the array from start to end
//         for (int i = 0; i < n; i++) {
//             // Place the element from end of arr into beginning of ans
//             ans[i] = arr[n - 1 - i];
//         }

//         // Return the reversed array
//         return ans;
//     }
// };

// // Driver code
// int main() {
//     // Input array
//     vector<int> arr = {1, 2, 3, 4, 5};

//     // Create object of Solution class
//     Solution obj;

//     // Call the reverseArray function
//     vector<int> result = obj.reverseArray(arr);

//     // Print the reversed array
//     cout << "Reversed Array: ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// Complexity Analysis

// Time Complexity: O(n) Each element is visited once in a loop, where n is the number of elements in the input array.

// Space Complexity: O(n) An additional array of the same size is used to store the reversed elements.


// Better Approach

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     // Function to reverse the array in-place
//     void reverseArray(vector<int>& arr) {
//         // Initialize pointer to the beginning of the array
//         int p1 = 0;

//         // Initialize pointer to the end of the array
//         int p2 = arr.size() - 1;

//         // Loop until the two pointers meet in the middle
//         while (p1 < p2) {
//             // Swap the elements at p1 and p2
//             swap(arr[p1], arr[p2]);

//             // Move the left pointer one step to the right
//             p1++;

//             // Move the right pointer one step to the left
//             p2--;
//         }
//     }
// };

// // Driver code
// int main() {
//     // Create a Solution object
//     Solution sol;

//     // Input array
//     vector<int> arr = {1, 2, 3, 4, 5};

//     // Call the reverse function
//     sol.reverseArray(arr);

//     // Print the reversed array
//     for (int num : arr) {
//         cout << num << " ";
//     }

//     return 0;
// }

// Time Complexity: O(n) Where n is the number of elements in the array. Each element is visited at most once due to the two-pointer approach.

// Space Complexity: O(1) No extra space is used other than a few pointers and variables. The array is reversed in-place.

// Built-in Library Function Approach

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to reverse the array using STL reverse function
    void reverseArray(vector<int>& arr) {
        // Use STL reverse to reverse array in-place
        reverse(arr.begin(), arr.end());
    }
};

// Driver code
int main() {
    // Input array
    vector<int> arr = {1, 2, 3, 4, 5};

    // Create Solution object
    Solution obj;

    // Call function to reverse the array
    obj.reverseArray(arr);

    // Output the reversed array
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Time Complexity: O(n), because each element is visited once and possibly swapped once with its mirror index.

// Space Complexity: O(1) for C++, Java, and JavaScript (in-place), but O(n) for Python slicing since it creates a new list and then assigns back (unless using two pointers).
