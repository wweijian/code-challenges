#
# @lc app=leetcode id=2130 lang=python3
#
# [2130] Maximum Twin Sum of a Linked List
#

# @lc code=start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
	def pairSum(self, head: Optional[ListNode]) -> int:
		fast, slow, reverse = head, head, None
		sum = 0

		while fast and fast.next:
			reverse = ListNode(slow.val, reverse)
			slow = slow.next
			fast = fast.next.next
		while slow:
			sum = max(sum, slow.val + reverse.val)
			reverse = reverse.next
			slow = slow.next
		return sum
# @lc code=end

