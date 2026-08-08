#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
         sort(nums.begin(), nums.end());
         int freq = 1,ans= nums[0];
         for(int i = 1; i < n; i++){
                if(nums[i] == nums[i-1]){
                    freq++;
                } else {
                    freq = 1;
                    ans = nums[i];
                }
                if(freq > n/2){
                    return ans;
                }

         }
        return -1;
    }
};
int main() {
    Solution solution;
    vector<int> nums = {3, 2, 3};
    int result = solution.majorityElement(nums);
    cout << "Majority Element: " << result << endl; // Output: Majority Element: 3
    return 0;
}