#
# @lc app=leetcode id=1732 lang=python3
#
# [1732] Find the Highest Altitude
#

# @lc code=start
class Solution:
	def largestAltitude(self, gain: List[int]) -> int:
		maxHeight, height = 0, 0
		for num in gain:
			height += num
			maxHeight = max(height, maxHeight)
		return maxHeight
# @lc code=end

