
// Combination Sum
// Medium
// Topics
// premium lock icon
// Companies
// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

// The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

// The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

 

// Example 1:

// Input: candidates = [2,3,6,7], target = 7
// Output: [[2,2,3],[7]]
// Explanation:
// 2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
// 7 is a candidate, and 7 = 7.
// These are the only two combinations.
// Example 2:

// Input: candidates = [2,3,5], target = 8
// Output: [[2,2,2,2],[2,3,3],[3,5]]
// Example 3:

// Input: candidates = [2], target = 1
// Output: []


#include <iostream>
#include <vector>
using namespace std;

void solve(int index, vector<int>& candidates, int target,
           vector<int>& current, vector<vector<int>>& ans) {

    // Base case
    if (index == candidates.size()) {
        if (target == 0) {
            ans.push_back(current);
        }
        return;
    }

    // Pick the same element
    if (candidates[index] <= target) {
        current.push_back(candidates[index]);

        solve(index, candidates, target - candidates[index],
              current, ans);

        current.pop_back();
    }

    // Not pick the element
    solve(index + 1, candidates, target, current, ans);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

    vector<vector<int>> ans;
    vector<int> current;

    solve(0, candidates, target, current, ans);

    return ans;
}

int main() {

    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> ans = combinationSum(candidates, target);

    for (auto combination : ans) {
        cout << "[";
        for (int num : combination) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
