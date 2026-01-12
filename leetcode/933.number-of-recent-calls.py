#
# @lc app=leetcode id=933 lang=python3
#
# [933] Number of Recent Calls
#

# @lc code=start
class RecentCounter:

	def __init__(self):
		self.q = []

	def ping(self, t: int) -> int:
		self.q.append(t)
		while self.q and self.q[0] < t - 3000:
			self.q.pop(0)
		return len(self.q)


# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)
# @lc code=end

