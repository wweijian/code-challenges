/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */

// @lc code=start

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	int compress(vector<char>& chars) {
		if (chars.size() == 1)
			return 1;
		string	res;
		int count = 0;
		auto it = chars.begin();
		while (it != chars.end()) {
			auto it2 = it;
			count = 0;
			while (it2 != chars.end() && *it2 == *it) {
				count++;
				it2++;
			}
			if (count == 1)
				res += *it;
			else
				res += *it + to_string(count);
			it = it2;
		}
		chars = vector(res.begin(), res.end());
		return res.size();
	}
};
// @lc code=end

