#
# @lc app=leetcode id=1493 lang=python3
#
# [1493] Longest Subarray of 1's After Deleting One Element
#

# @lc code=start
class Solution:
	def longestSubarray(self, nums: List[int]) -> int:
		zeroIdx, size, i, maxSubarray = -1, len(nums), 0, -1
		for j in range(size):
			if nums[j] == 0:
				i = zeroIdx + 1
				zeroIdx = j
			maxSubarray = max(maxSubarray, j - i)
		return maxSubarray
# @lc code=end

