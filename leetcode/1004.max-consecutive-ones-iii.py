#
# @lc app=leetcode id=1004 lang=python3
#
# [1004] Max Consecutive Ones III
#

# @lc code=start
class Solution:
	def longestOnes(self, nums: List[int], k: int) -> int:
		i, maxSubarray, zeroCount = 0, 0, 0
		for j, val in enumerate(nums):
			zeroCount += (val == 0)
			while zeroCount > k:
				zeroCount -= (nums[i] == 0)
				i += 1
			maxSubarray = max(maxSubarray, j - i + 1)
		return maxSubarray
# @lc code=end

