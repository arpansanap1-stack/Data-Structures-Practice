#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            } else {
                freq--;
            }
        }
        return ans;
    }
};
int main() {
    Solution solution;
    vector<int> nums = {3, 2, 3};
    int result = solution.majorityElement(nums);
    cout << "Majority Element: " << result << endl; // Output: Majority Element: 3
    return 0;
}