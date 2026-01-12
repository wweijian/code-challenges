#
# @lc app=leetcode id=328 lang=python3
#
# [328] Odd Even Linked List
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
	def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
		oddListHead = None
		oddListTail = None
		evenListHead = None
		evenListTail = None
		if head is None or head.next is None or head.next.next is None:
			return head;
		while head :
			if oddListHead is None:
				oddListHead = head
			else:
				oddListTail.next = head
			oddListTail = head;
			head = head.next
			if head is None:
				break
			if evenListHead is None:
				evenListHead = head
			else:
				evenListTail.next = head
			evenListTail = head;
			head = head.next
		oddListTail.next = evenListHead
		evenListTail.next = None;
		return oddListHead
# @lc code=end

