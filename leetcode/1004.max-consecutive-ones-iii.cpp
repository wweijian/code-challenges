/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
 */

// @lc code=start

class Solution {
public:
	int longestOnes(vector<int>& nums, int k) {
		int	len = 1;
		int	zeroCount = 0;
		int	maxSubarray = 0;
		int	numsLen = nums.size();
		int	i = 0;
		int j = 0;

		while (j < numsLen) {
			zeroCount += (nums[j] == 0);
			while (zeroCount > k) {
				if (nums[i] == 0)
					zeroCount--;
				i++;
			}
			len = j - i + 1;
			maxSubarray = len > maxSubarray ? len : maxSubarray;
			j++;
		}
		return maxSubarray;
	}
};
// @lc code=end