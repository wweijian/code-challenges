/*
 * @lc app=leetcode id=649 lang=cpp
 *
 * [649] Dota2 Senate
 */

// @lc code=start
/* class Solution {
public:
	string predictPartyVictory(string senate) {
		queue<char>	q; // maybe queue is for ban?
		int			countR = 0, countD = 0;
		int			i = 0;

		while (true) {
			if (i == senate.size()) {
				if (countR == 0 || countD == 0)
					return (countR ? "Radiant" : "Dire");
				countR = 0;
				countD = 0;
				i = 0;
			}
			if (q.empty() || q.front() == senate[i]) {
				q.push(senate[i]);
				countR += senate[i] == 'R';
				countD += senate[i] == 'D';
				i++;
			}
			else {
				senate.erase(i, 1);
				q.pop();
			}
		}
		return "X";
	}
}; */

class Solution {
public:
	string predictPartyVictory(string senate) {
		queue<int>	d, r;
		int			len = senate.size();

		for (int i = 0; i < len; i++)
			senate[i] == 'R' ? r.push(i) : d.push(i);
		while (!r.empty() && !d.empty()) {
			r.front() > d.front() ? d.push(len++) : r.push(len++);
			r.pop();
			d.pop();
		}
		return (r.empty() ? "Dire" : "Radiant");
	}
};

// @lc code=end
