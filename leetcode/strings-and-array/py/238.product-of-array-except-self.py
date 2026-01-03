#
# @lc app=leetcode id=238 lang=python3
#
# [238] Product of Array Except Self
#

# @lc code=start
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        res = [1] * n

        buffer = 1
        for i, v in enumerate(nums):
            res[i] = buffer
            buffer *= v
        
        buffer = 1
        for i in range(n - 1, -1, -1):
            res[i] *= buffer
            buffer *= nums[i]

        return res
        
# @lc code=end

