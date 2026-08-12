// leetcode 1910
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        string st;

        for (char c : s) {
            st += c;

            if (st.size() >= part.size() &&
                st.compare(st.size() - part.size(), part.size(), part) == 0) {
                st.erase(st.size() - part.size());
            }
        }

        return st;
    }
};
