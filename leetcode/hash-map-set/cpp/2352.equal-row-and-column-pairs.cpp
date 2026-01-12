/*
 * @lc app=leetcode id=2352 lang=cpp
 *
 * [2352] Equal Row and Column Pairs
 */

// @lc code=start
class Solution {
public:
	int equalPairs(vector<vector<int>>& grid) {
		map<vector<int>, int>	freq;
		int count = 0;
		int gridSize = grid.size();

		for (int i = 0; i < gridSize; i++)
			freq[grid[i]]++;
		for (int i = 0; i < gridSize; i++) { // safer to do rows then column rather both at the same time
			vector<int>	v;
			for (int j = 0; j < gridSize; j++)
				v.push_back(grid[j][i]);
			count += freq[v];
		}

		return count;
	}
};
// @lc code=end

/* 1. map (ordered)

Implemented as a balanced binary search tree (usually a red-black tree)
Keys are kept sorted

Time complexity:
insert: O(log n)
lookup: O(log n)

So real cost ≈ O(k · log n) per access.

2. unordered_map (hash table)

Implemented as a hash table
Keys are not ordered
Uses a hash function to jump directly to a bucket

Average time complexity:
insert: O(1)
lookup: O(1)

Here:
The vector is hashed once
No repeated lexicographical comparisons like in a tree
So real cost ≈ O(k) per access. 
*/