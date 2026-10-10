// 16. 3Sum Closest
// Medium
// Topics
// premium lock icon
// Companies
// You are given an integer array nums of length n and an integer target.

// Find three integers at distinct indices in nums such that the sum is closest to target.

// Return the sum of the three integers.

// You may assume that each input would have exactly one solution.

 

// Example 1:

// Input: nums = [-1,2,1,-4], target = 1
// Output: 2
// Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
// Example 2:

// Input: nums = [0,0,0], target = 1
// Output: 0
// Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
 

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());

    int n = nums.size();
    int closestSum = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (abs(target - sum) < abs(target - closestSum)) {
                closestSum = sum;
            }

            if (sum == target) {
                return sum;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return closestSum;
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    cout << threeSumClosest(nums, target) << endl;

    return 0;
}
