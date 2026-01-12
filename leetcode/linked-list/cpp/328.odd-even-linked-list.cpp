/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
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
	ListNode* oddEvenList(ListNode* head) {
		
		if (!head || !head->next || !head->next->next)
			return head;

		ListNode*	oddListHead = nullptr;
		ListNode*	oddListTail;
		ListNode*	evenListHead = nullptr;
		ListNode*	evenListTail;
		while (head) {
			if (!oddListHead)
				oddListHead = head;
			else
				oddListTail->next = head;
			oddListTail = head;
			head = head->next;
			if (!head)
				break ;
			if (!evenListHead)
				evenListHead = head;
			else
				evenListTail->next = head;
			evenListTail = head;
			head = head->next;
		}
		oddListTail->next = evenListHead;
		evenListTail->next = nullptr;
		return oddListHead;
	}
};
// @lc code=end

