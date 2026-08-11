// leetcode question: 344. Reverse String

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            // Swap the characters using the built-in swap function
            swap(s[left], s[right]);
            
            // Move pointers towards the middle
            left++;
            right--;
        }
    }
};
// this program runs with time compleexity of o(n) and space complexity of o(1)

int main() {
    Solution solution;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    
    solution.reverseString(s);
    
    // Output the reversed string
    for (char c : s) {
        cout << c;
    }
    cout << endl;
    
    return 0;
}