#include <iostream>
#include <vector>

int main() {
    using namespace std;
    vector<int> nums = {4, 1, 2, 1, 2};
    int ans = 0;
    // by using bitwise XOR
    for(int val : nums){
        ans ^= val;
    }
    cout<<ans;
}
