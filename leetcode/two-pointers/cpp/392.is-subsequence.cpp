/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
class Solution {
public:
	bool isSubsequence(string s, string t) {
		int	s_index = 0;
		int t_index = 0;
		size_t	s_len = s.size();
		size_t	t_len = t.size();

		while (t_index < t_len && s_index < s_len) {
			if (t[t_index] == s[s_index])
				s_index++;
			t_index++;
		}
		if (s_index == s_len)
			return true ;
		return false;
	}
};
// @lc code=end

