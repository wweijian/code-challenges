/*
 * @lc app=leetcode id=2215 lang=cpp
 *
 * [2215] Find the Difference of Two Arrays
 */

// @lc code=start
class Solution {
public:
	vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
		set<int>	map1;
		set<int>	map2;
		vector<vector<int>>	v = { {}, {} };
		
		for (auto num : nums1)
			map1.insert(num);
		for (auto num: nums2)
			map2.insert(num);
		for (auto num : map1) {
			if (map2.contains(num))
				continue ;
			v[0].push_back(num);
		}
		for (auto num : map2) {
			if (map1.contains(num))
				continue ;
			v[1].push_back(num);
		}
		return v;
	}
};
// @lc code=end

