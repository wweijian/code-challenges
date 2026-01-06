#
# @lc app=leetcode id=1679 lang=python3
#
# [1679] Max Number of K-Sum Pairs
#

# @lc code=start
class Solution:
	def maxOperations(self, nums: List[int], k: int) -> int:
		d = dict()
		for num in nums:
			d[num] = d.get(num, 0) + 1
		count = 0
		for key, value in d.items():
			target = d.get(k - key, 0)
			count += min(target, d[key])
		return count // 2
# @lc code=end

