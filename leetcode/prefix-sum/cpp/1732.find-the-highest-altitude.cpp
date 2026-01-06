/*
 * @lc app=leetcode id=1732 lang=cpp
 *
 * [1732] Find the Highest Altitude
 */

// @lc code=start
class Solution {
public:
	int largestAltitude(vector<int>& gain) {
		int	max = 0;
		int height = 0;

		for (auto num : gain) {
			height += num;
			max = max > height ? max : height;
		}
		return max;
	}
};
// @lc code=end

