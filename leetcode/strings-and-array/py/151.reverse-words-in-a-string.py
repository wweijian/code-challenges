#
# @lc app=leetcode id=151 lang=python3
#
# [151] Reverse Words in a String
#

# @lc code=start
class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split() # split words into string, remove extra spaces
        reversed_words = words[::-1] # reverse the list of words
        return ' '.join(reversed_words) # join them back in space

# @lc code=end

