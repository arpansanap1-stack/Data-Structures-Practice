#include <iostream>
#include <vector>
using namespace std;
// the time complexity of this approach is O(n) and the space complexity is O(1)

vector<int> pairSum(vector<int> nums, int target){
    int n = nums.size();
    int i=0, j=n-1;
    
    vector<int> ans;
    while(i<j){
        int pairSum = nums[i]+nums[j];
        if(pairSum>target){
            j--;
        }
        else if(pairSum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            
            return ans;
        }
    }
    return ans;
    

}
    
int main(){
    vector<int> nums = {1, 2, 3, 4, 6};
    int target = 10;
    vector<int> ans = pairSum(nums, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
   
}