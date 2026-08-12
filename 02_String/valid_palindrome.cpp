// leetcode 125. Valid Palindrome

#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
       int st = 0, end = s.length() - 1;

       while(st < end){
        if(!isalnum(s[st])){
            st++; continue;
        }
        if(!isalnum(s[end])){
            end--; continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++; end--;
       }
       return true;
    }
};