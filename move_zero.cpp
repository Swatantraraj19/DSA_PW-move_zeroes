#include <iostream>
#include <vector>

using namespace std;

    void moveZeroes(vector<int>& nums) {
    int nonZeroPointer = 0;
    int currentPointer = 0;

    while (currentPointer < nums.size()) {
        if (nums[currentPointer] != 0) {
           swap(nums[currentPointer], nums[nonZeroPointer]);
           nonZeroPointer++;
        }
        currentPointer++;
    }
}

int main() {

    // Example:1

    vector<int> nums1 = {0, 1, 0, 3, 12};
    moveZeroes(nums1);

    cout << "Output for Example 1: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    // Example:2
    
    vector<int> nums2 = {0};
    moveZeroes(nums2);

    cout << "Output for Example 2: ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}