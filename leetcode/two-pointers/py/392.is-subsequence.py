#
# @lc app=leetcode id=392 lang=python3
#
# [392] Is Subsequence
#

# @lc code=start
class Solution:
	def isSubsequence(self, s: str, t: str) -> bool:
		s_len = len(s)
		t_len = len(t)
		s_index = 0
		t_index = 0
		while t_index < t_len and s_index < s_len:
			if t[t_index] == s[s_index]:
				s_index +=1
			t_index += 1
		return s_index == s_len
# @lc code=end

