/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start

// faster solution
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
            words.push_back(tmp);

        string ans;
        for (int i = words.size() - 1; i >= 0; --i) {
            if (i != words.size() - 1) ans += " ";
            ans += words[i];
        }
        return ans;
    }
};

/* 
# > this is slower because of how insert works, having to repeatedly shift the characters instead of just doing it directly from an array
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string res;

        while (!ss.eof()) {
            string buf;
            ss >> buf;
            if (!buf.empty()){
                if (res != "")
                    res.insert(0, " ");
                res.insert(0, buf);
            }
        }

        return res;
    }
}; */
// @lc code=end

