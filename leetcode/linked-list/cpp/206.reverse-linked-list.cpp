/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// clean solution but uses new, O(n) memory
class Solution {
public:

	ListNode* reverseList(ListNode* head) {
		ListNode*	reverse = nullptr;

		while (head) {
			reverse = new ListNode(head->val, reverse);
			head = head->next;
		}
		return reverse;
	}
};
// @lc code=end
