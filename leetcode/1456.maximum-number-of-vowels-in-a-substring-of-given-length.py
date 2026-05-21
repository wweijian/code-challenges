#
# @lc app=leetcode id=1456 lang=python3
#
# [1456] Maximum Number of Vowels in a Substring of Given Length
#

# @lc code=start
class Solution:
	def maxVowels(self, s: str, k: int) -> int:
		vowels, maxVowels = 0, 0
		for i in range(len(s)):
			if (i < k):
				if s[i] in {'a', 'e', 'i', 'o', 'u'}:
					vowels += 1
					maxVowels += 1
			else:
				vowels += (s[i] in {'a', 'e', 'i', 'o', 'u'}) - (s[i - k] in {'a', 'e', 'i', 'o', 'u'})
				maxVowels = max(vowels, maxVowels)
		return maxVowels
# @lc code=end
