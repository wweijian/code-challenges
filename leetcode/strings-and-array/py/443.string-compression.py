#
# @lc app=leetcode id=443 lang=python3
#
# [443] String Compression
#

# @lc code=start
class Solution:
	def compress(self, chars: List[str]) -> int:
		write = 0

		for char, group in groupby(chars):
			count = len(list(group))
			chars[write] = char
			write += 1
			if count > 1:
				for c in str(count):
					chars[write] = c
					write += 1

		return write
		
# @lc code=end

