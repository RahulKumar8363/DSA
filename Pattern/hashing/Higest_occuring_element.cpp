// Example 1

// Input: nums = [1, 2, 2, 3, 3, 3]

// Output: 3

// Explanation: The number 3 appears the most (3 times). It is the most frequent element.

// Example 2

// Input: nums = [4, 4, 5, 5, 6]

// Output: 4

// Explanation: Both 4 and 5 appear twice, but 4 is smaller. So, 4 is the most frequent element.


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {

        unordered_map<int, int> freq;

        // count frequency
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }

        int maxFreq = 0;
        int ans = INT_MAX;

        // find most frequent (tie → smallest wins)
        for(auto it : freq){
            int num = it.first;
            int count = it.second;

            if(count > maxFreq){
                maxFreq = count;
                ans = num;
            }
            else if(count == maxFreq){
                ans = min(ans, num);
            }
        }

        return ans;
    }
};

// main function for VS Code run
int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    Solution obj;
    cout << obj.mostFrequentElement(nums) << endl;

    return 0;
}