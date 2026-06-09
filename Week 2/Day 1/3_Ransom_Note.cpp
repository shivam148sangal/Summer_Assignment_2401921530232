#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()) {
            return false;
        }
        vector<int> freq(26, 0);
        for (char c : magazine) {
            freq[c - 'a']++;
        }
        for (char c : ransomNote) {
            freq[c - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] < 0) {
                return false;
            }
        }
        return true;
    }
};