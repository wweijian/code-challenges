#
# @lc app=leetcode id=1207 lang=python3
#
# [1207] Unique Number of Occurrences
#

# @lc code=start
class Solution:
	def uniqueOccurrences(self, arr: List[int]) -> bool:
		occur = []
		freq = {}
		for num in arr:
			if num in freq:
				freq[num] += 1
			else:
				freq[num] = 1
		return len(set(freq.values())) == len(set(arr))
# @lc code=end

