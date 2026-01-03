#
# @lc app=leetcode id=345 lang=python3
#
# [345] Reverse Vowels of a String
#

# @lc code=start
VOWELS = set('aeiouAEIOU')

class Solution:
    def reverseVowels(self, s: str) -> str:
        s = list(s)         # convert string to list for mutability (because strings are all immutable)
        left, right = 0, len(s) - 1
        while left < right:
            while left < right and s[left] not in VOWELS:
                left += 1
            while left < right and s[right] not in VOWELS:
                right -= 1
            if left < right:
                s[left], s[right] = s[right], s[left]
                left += 1
                right -= 1
        return "".join(s)
# @lc code=end

