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

// new number always have to form the "third" otherwise the third would have already been found

class Solution {
public:

    static bool increasingTriplet(vector<int>& nums) {
		bool	second = false;
		int		second_num;
		int		smallest = nums.front();
		for (auto it = nums.begin() + 1; it != nums.end(); it++) {
			if (second && *it > second_num)
				return true;
			else if (*it < smallest)  // we'll keep second because if it still exists, then it's still good
				smallest == *it;
			else if (*it > smallest) {
				second = true;
				second_num = *it;
			}
		}
		return false;
    }
};
// @lc code=end

int main (int ac, char** av)
{
	if (ac < 2) {
		cerr << "usage: at least 1 argument" << endl;
		return 1;
	}
	vector<int> v;
	for (int i = 0; i < ac; i++) {
		v.push_back(atoi(av[i]));
	}
	cout << (Solution::increasingTriplet(v) ? "true" : "false") << endl;
}