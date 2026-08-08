// sort array of 0s, 1s and 2s 
// [2,0,2,1,1,0,1,2,0,0]
// take three pointers low, mid and high
// store low and mid at 0 and high at n-1
// while mid <= high
// Leetcode Sort Color Problem

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
