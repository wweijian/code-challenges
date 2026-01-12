#
# @lc app=leetcode id=2352 lang=python3
#
# [2352] Equal Row and Column Pairs
#

# @lc code=start
class Solution:
	def equalPairs(self, grid: List[List[int]]) -> int:
		count = 0;
		row = {};
		n = len(grid)
		for i in range(n):
			rows = tuple(grid[i])
			row[rows] = 1 + row.get(rows, 0)
		for i in range(n):
			col = tuple(grid[j][i] for j in range(n))
			count += row.get(col, 0)

		return count;
# @lc code=end

