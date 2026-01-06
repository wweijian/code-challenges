#
# @lc app=leetcode id=283 lang=python3
#
# [283] Move Zeroes
#

# @lc code=start
class Solution:
	def moveZeroes(self, nums: List[int]) -> None:
		nonzeroCount = 0;
		for i in range(len(nums)):
			if (nums[i] != 0):
				nums[nonzeroCount] = nums[i]
				nonzeroCount+=1
		while nonzeroCount < len(nums):
			nums[nonzeroCount] = 0;
			nonzeroCount +=1

		
# @lc code=end

