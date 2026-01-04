/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
#include <vector>

using namespace std;

/* class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int			count = 0;
		int			i = 0;
		
		while (i < nums.size()) {
			if (nums[i] == 0) {
				nums.erase(nums.begin() + i);
				count++;
			}
			else
				i++;
		}
		while(count-- > 0)
			nums.push_back(0);
	}
}; */

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		size_t	nonzeroCount = 0;
		for (size_t i = 0; i < nums.size(); i++) {
			if (nums[i] != 0)
				nums[nonzeroCount++] = nums[i];
		}
		while (nonzeroCount < nums.size())
			nums[nonzeroCount++] = 0;
	}
};


// @lc code=end

