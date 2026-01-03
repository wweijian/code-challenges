#
# @lc app=leetcode id=605 lang=python3
#
# [605] Can Place Flowers
#

# @lc code=start
class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        # OR for i, value in enumerate(flowerbed):
        i = 0
        while i < len(flowerbed):
            if (flowerbed[i] == 1): i += 2
            elif (n != 0 and (i == 0 or flowerbed[i - 1] == 0) and (i == len(flowerbed) - 1 or flowerbed[i + 1] == 0)):
                flowerbed[i] = 1
                n -= 1
                i += 2
            else: i += 1
        return n == 0
# @lc code=end

