/*
 * @lc app=leetcode id=2095 lang=cpp
 *
 * [2095] Delete the Middle Node of a Linked List
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
class Solution {
public:
	ListNode* deleteMiddle(ListNode* head) {
		ListNode*	search = head;
		int			count = 0;
		ListNode*	middle = head;
		ListNode*	prev = nullptr;

		if (!head || !head->next)
			return nullptr;
		while (search && search->next) {
			prev = middle;
			middle = middle->next;
			search = search->next->next;
		}
		prev->next = middle->next;
		delete middle;
		return head;
	}
};
// @lc code=end
