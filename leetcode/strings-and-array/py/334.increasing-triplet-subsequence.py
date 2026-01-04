#
# @lc app=leetcode id=334 lang=python3
#
# [334] Increasing Triplet Subsequence
#

# @lc code=start
class Solution:
	def increasingTriplet(self, nums: List[int]) -> bool:
		min1 = nums[0]
		min2 = 2**32-1
		for i in nums[1:]:
			if i <= min1: min1 = i
			elif i <= min2: min2 = i
			else: return True
		return False

# @lc code=end

