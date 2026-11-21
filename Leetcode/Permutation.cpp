// Permutations
// Medium
// Topics
// premium lock icon
// Companies
// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// Example 2:

// Input: nums = [0,1]
// Output: [[0,1],[1,0]]
// Example 3:

// Input: nums = [1]
// Output: [[1]]


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void solve(vector<int>& nums, vector<int>& temp,
               vector<bool>& visited,
               vector<vector<int>>& ans) {

        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (!visited[i]) {
                visited[i] = true;
                temp.push_back(nums[i]);

                solve(nums, temp, visited, ans);

                temp.pop_back();
                visited[i] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        vector<bool> visited(nums.size(), false);

        solve(nums, temp, visited, ans);

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = obj.permute(nums);

    cout << "All permutations:" << endl;

    for (auto p : result) {
        cout << "[";
        for (int i = 0; i < p.size(); i++) {
            cout << p[i];
            if (i != p.size() - 1) {
                cout << ",";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
