/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		int	left = 0;
		int right = 0;
		for (auto n : nums | views::drop(1)) {
			right += n;
		}
		for (auto it = nums.begin(); it != nums.end(); it++) {
			if (left == right)
				return (it - nums.begin());
			left += *it;
			right = (it + 1 == nums.end() ? 0 : right - *(it + 1));
		}
		return -1;
	}
};
// @lc code=end
