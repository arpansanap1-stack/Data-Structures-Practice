// permutation in string leetcode problem number
#include<iostream>
using namespace std;

class Solution {
public:

    bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        // Important edge case
        if (s1.length() > s2.length()) {
            return false;
        }

        int freq[26] = {0};

        // Frequency of s1
        for (int i = 0; i < s1.length(); i++) {
            freq[s1[i] - 'a']++;
        }

        int windSize = s1.length();
        int windFreq[26] = {0};

        // First window
        for (int i = 0; i < windSize; i++) {
            windFreq[s2[i] - 'a']++;
        }

        if (isFreqSame(freq, windFreq)) {
            return true;
        }

        // Slide the window
        for (int i = windSize; i < s2.length(); i++) {

            // Add new character
            windFreq[s2[i] - 'a']++;

            // Remove old character
            windFreq[s2[i - windSize] - 'a']--;

            if (isFreqSame(freq, windFreq)) {
                return true;
            }
        }

        return false;
    }
};