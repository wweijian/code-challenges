/*
 * @lc app=leetcode id=1679 lang=cpp
 *
 * [1679] Max Number of K-Sum Pairs
 */

// @lc code=start

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/* class Solution {
public:
	int maxOperations(vector<int>& nums, int k) {
		vector<int>	v;
		int			count = 0;

		for (auto it = nums.begin(); it < nums.end(); it++) {
			if (*it > k)
				continue ;
			auto vfind = find(v.begin(), v.end(), k - *it);
			if (vfind == v.end())
				v.push_back(*it);
			else {
				v.erase(vfind);
				count++;
			}
		}
		return count;
	}
}; */

#include <map> // preferred solution

class Solution {
public:
	int maxOperations(vector<int>& nums, int k) {
		map<int,int>	num_map;
		for(int i:nums)
			num_map[i]++;
		int count = 0;
		for(auto [key,val]:num_map){
			int	target = num_map[k-key];
			if (target)
				count += min(num_map[k-key],num_map[key]);
		}
		return (count) / 2;
	}
};

/* class Solution {
public:
	int maxOperations(vector<int>& nums, int k) {
		sort(nums.begin(), nums.end());
		int i = 0;
		int count = 0;
		int j = nums.size() - 1;
		
		while (i < j) {
			if (nums[i] + nums[j] == k) {
				i++;
				j--;
				count++;
			}
			else if(nums[i] + nums[j] < k)
				i++;
			else if (nums[i] + nums[j] > k)
				j--;
		}
		return count;
	}
}; */

// @lc code=end

