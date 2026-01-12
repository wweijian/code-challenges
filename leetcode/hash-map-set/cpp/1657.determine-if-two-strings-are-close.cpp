/*
 * @lc app=leetcode id=1657 lang=cpp
 *
 * [1657] Determine if Two Strings Are Close
 */

// @lc code=start
class Solution {
public:
	bool closeStrings(string word1, string word2) {
		if (word1.size() != word2.size()) return false;

		vector<int>	v1(26, 0), v2(26,0);
		for (char c : word1) v1[c - 'a']++;
		for (char c : word2) v2[c - 'a']++;
		for (int i = 0; i < 26; i++) {
			if ((v1[i] == 0 && v2[i] > 0) || (v2[i] == 0 && v1[i] > 0))
				return false;
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		return v1 == v2;
	}
};
// @lc code=end

