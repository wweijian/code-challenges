#
# @lc app=leetcode id=649 lang=python3
#
# [649] Dota2 Senate
#

# @lc code=start
from queue import Queue

class Solution:
	def predictPartyVictory(self, senate: str) -> str:
		size = len(senate)

		r_arr = [i for i in range(len(senate)) if senate[i] == 'R']
		d_arr = [j for j in range(len(senate)) if senate[j] == 'D']
		while r_arr and d_arr:
			r = r_arr.pop(0)
			d = d_arr.pop(0)
			if r < d:
				r_arr.append(size)
			else:
				d_arr.append(size)
			size += 1
		return "Radiant" if r_arr else "Dire"

# @lc code=end

