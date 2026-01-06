#
# @lc app=leetcode id=724 lang=python3
#
# [724] Find Pivot Index
#

# @lc code=start
class Solution:
	def pivotIndex(self, nums: List[int]) -> int:
		left, right = 0, 0
		for num in nums[1:]:
			right += num
		for i in range(lenw(nums)):
			if left == right:
				return i
			left += nums[i]
			if i == len(nums) - 1:
				break ;
			right -= nums[i + 1]
		return -1
# @lc code=end

