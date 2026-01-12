/*
 * @lc app=leetcode id=2130 lang=cpp
 *
 * [2130] Maximum Twin Sum of a Linked List
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

	int pairSum(ListNode* head) {
		int			sum = 0;
		ListNode*	fast = head;
		ListNode*	slow = head;
		ListNode*	reverse = nullptr;
		while (fast && fast->next) {
			reverse = new ListNode(slow->val, reverse);
			slow = slow->next;
			fast = fast->next->next;
		}
		while (slow) {
			sum = max(sum, slow->val + reverse->val);
			reverse = reverse->next;
			slow = slow->next;
		}
		return sum;
	}
};
// @lc code=end

