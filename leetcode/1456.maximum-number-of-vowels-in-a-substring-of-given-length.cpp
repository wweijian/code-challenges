/*
 * @lc app=leetcode id=1456 lang=cpp
 *
 * [1456] Maximum Number of Vowels in a Substring of Given Length
 */

// @lc code=start

#define IS_VOWEL(x) (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')

class Solution {
public:
	int maxVowels(string s, int k) {
		int	len = s.size();
		int	vowel = 0;
		int maxVowel = 0;

		for (int i = 0; i < len; i++) {
			if (i < k) {
				if (IS_VOWEL(s[i])) {
					vowel++;
					maxVowel++;
				}
				continue ;
			}
			vowel += IS_VOWEL(s[i]) - IS_VOWEL(s[i - k]);
			maxVowel = max(vowel, maxVowel);
			if (maxVowel == k) // faster for specific cases
				return k ;
		}
		return maxVowel;
	}
};
// @lc code=end

