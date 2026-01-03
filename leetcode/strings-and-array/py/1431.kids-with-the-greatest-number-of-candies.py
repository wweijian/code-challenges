#
# @lc app=leetcode id=1431 lang=python3
#
# [1431] Kids With the Greatest Number of Candies
#

# @lc code=start
class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        maxNum = max(candies)
        res = [] # declare + initialize a list
        for n in candies:        # remember the goddamn colons
            if n + extraCandies >= maxNum:
                res.append(True)
            else:
                res.append(False)
        return res
# @lc code=end

