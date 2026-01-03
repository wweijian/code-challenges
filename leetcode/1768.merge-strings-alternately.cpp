/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start

#include <iostream>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        size_t i = 0;
        while (i < word1.size() && i < word2.size()) 
        {
            res.append(1, word1[i]);
            res.append(1, word2[i]);
            i++;
        }
        res.append(word1, i, word1.size() - i);
        res.append(word2, i, word2.size() - i);
        return res;
    }
};
// @lc code=end
