/*
 * @lc app=leetcode id=1493 lang=cpp
 *
 * [1493] Longest Subarray of 1's After Deleting One Element
 */

// @lc code=start
class Solution {
public:
	int longestSubarray(vector<int>& nums) {
		int	zeroIdx = -1, len = nums.size(), i = 0, maxSubarray = -1;

		for (int j = 0; j < len; j++) {
			if (nums[j] == 0) {
				i = zeroIdx + 1;
				zeroIdx = j;
			}
			maxSubarray = max(maxSubarray, j - i);
		}
		return maxSubarray;
	}
};
// @lc code=end

