/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
// more optimized solution
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        int buffer = 1;
        int i = 0;

        while (i < n) {
            ans[i] = buffer;
            buffer *= nums[i++];
        }
        buffer = 1;
        i--;
        while (i >= 0) {
            ans[i] *= buffer;
            buffer *= nums[i--];
        }
        return ans;
    }
} ;

/* 
// slower solution and uses divide too
int multiply_all(vector<int>& nums, size_t pos)
{
    int res = 1;
    for (size_t i = 0; i < nums.size(); i++) {
        if (i != pos)
            res *= nums[i];
    }
    return res;
}

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int         buf = 1;
        for (size_t i = 0; i < nums.size(); i++) {
            buf *= nums[i];
        }
        for (size_t i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                res.push_back(buf / nums[i]);
            else {
                res.push_back(multiply_all(nums, i));
            }
        }
        return res;
    }
};


*/
// @lc code=end

