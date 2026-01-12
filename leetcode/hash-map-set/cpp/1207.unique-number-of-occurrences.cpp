/*
 * @lc app=leetcode id=1207 lang=cpp
 *
 * [1207] Unique Number of Occurrences
 */

// @lc code=start
class Solution {
public:
	bool uniqueOccurrences(vector<int>& arr) {
		set<int>		occur;
		size_t			oldSize = 0;
		map<int, int>	freq;
		
		for (int i = 0; i < arr.size(); i++) {
			freq[arr[i]] += 1;
		}
		for (auto it = freq.begin(); it != freq.end(); it++)
			occur.insert(it->second);
		return (occur.size() == freq.size());
	}
};
// @lc code=end

