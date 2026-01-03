#
# @lc app=leetcode id=1768 lang=python3
#
# [1768] Merge Strings Alternately
#

# @lc code=start

"""
# solution 1
class Solution:
	def mergeAlternately(self, word1: str, word2: str) -> str:
		i = 0
		res = ""
		for i in range(min(len(word1), len(word2))):
			res += word1[i] + word2[i] 
		res += word1[i + 1:] + word2[i + 1:]
		print(res)
		return res 
"""

class Solution:
	def mergeAlternately(self, word1: str, word2: str) -> str:
		return "".join(a + b for a, b in zip(word1, word2)) + word1[len(word2):] + word2[len(word1):]

# @lc code=end

