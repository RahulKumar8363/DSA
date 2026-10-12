
#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0)
            count0++;
        else if (nums[i] == 1)
            count1++;
        else
            count2++;
    }

    int i = 0;

    while (count0--) nums[i++] = 0;
    while (count1--) nums[i++] = 1;
    while (count2--) nums[i++] = 2;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements (0, 1, 2): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sortColors(nums);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
    return 0;
}
