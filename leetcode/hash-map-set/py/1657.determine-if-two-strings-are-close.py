#
# @lc app=leetcode id=1657 lang=python3
#
# [1657] Determine if Two Strings Are Close
#

# @lc code=start
class Solution:
	def closeStrings(self, word1: str, word2: str) -> bool:
		if len(word1) != len(word2): return False
		s1 = set(word1)
		if s1 != set(word2): return False
		return sorted([word1.count(c) for c in s1]) == sorted([word2.count(c) for c in s1])

# @lc code=end
