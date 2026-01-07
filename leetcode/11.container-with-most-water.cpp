/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <algorithm>
#include <vector>
#include <>

using namespace std;

class Solution {
public:
	int maxArea(vector<int>& height) {
		auto	tallest = max_element(height.begin(), height.end());
		int		max_potential = *tallest * height.size();
		int		max_area = 0;

		for (auto it = height.begin(); it != height.end(); it++) {
			
		}
	}
};
// @lc code=end

