/*
 * @lc app=leetcode id=643 lang=cpp
 *
 * [643] Maximum Average Subarray I
 */

// @lc code=start
class Solution {
public:

	double findMaxAverage(vector<int>& nums, int k) {
		int		i = 0;
		int		len = nums.size();
		double	sum = 0;

		while (i < k) {
			sum += nums[i];
			i++;
		}
		double max_sum = sum;
		while (i < len) {
			sum = sum - nums[i - k] + nums[i];
			max_sum = max(sum, max_sum);
			i++;
		}
		return max_sum / k;
	}
};
// @lc code=end

