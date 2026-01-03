/*
 * @lc app=leetcode id=1431 lang=cpp
 *
 * [1431] Kids With the Greatest Number of Candies
 */

// @lc code=start
#include <algorithm>

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int max = *max_element(candies.begin(), candies.end());
        for (auto kid : candies) {
            if (kid + extraCandies >= max) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};
// @lc code=end

