#
# @lc app=leetcode id=11 lang=python3
#
# [11] Container With Most Water
#

# @lc code=start
class Solution:
	def maxArea(self, height: List[int]) -> int:
		front, back, area = 0, len(height) - 1, 0
		while (back > front):
			area = max(area, min(height[back], height[front]) * (back - front))
			if (height[back] < height[front]):
				back -= 1
			else:
				front += 1
		return area
# @lc code=end

