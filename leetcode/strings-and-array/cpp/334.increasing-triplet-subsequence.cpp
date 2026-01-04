/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */

// @lc code=start
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

/* class Solution {
public:

    bool increasingTriplet(vector<int>& nums) {
		bool	second = false;
		int		second_num;
		int		smallest = nums.front();
		for (auto it = nums.begin() + 1; it != nums.end(); it++) {
			if (second && *it > second_num)
				return true;
			else if (*it < smallest)  // we'll keep second because if it still exists, then it's still good
				smallest = *it;
			else if (!second && *it > smallest) {
				second = true;
				second_num = *it;
			}
			else if (*it > smallest)
				second_num = second_num < *it ? second_num : *it;
		}
		return false;
    }
}; */

class Solution {
	public:

	bool	increasingTriplet(vector<int> &nums) {
		int	min1 = INT_MAX;
		int min2 = INT_MAX;
		
		for (auto num : nums) {
			if (num <= min1) min1 = num;
			else if (num <= min2) min2 = num;
			else return true;
		}
		return false;
	}
} ;

// @lc code=end
