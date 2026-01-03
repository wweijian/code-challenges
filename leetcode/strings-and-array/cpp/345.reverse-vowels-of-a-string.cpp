/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
/* #define IS_LOWER(x) (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
#define IS_UPPER(x) (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
#define IS_VOWEL(x) (IS_LOWER(x) || IS_UPPER(x))

bool isVowel(int c)
{
    return IS_VOWEL(c);
}

template<typename ForwardIt, typename UnaryPred>
ForwardIt find_last_if(ForwardIt first, ForwardIt last, UnaryPred p) {
    ForwardIt result = last;
    for (ForwardIt it = first; it != last; ++it) {
        if (p(*it)) result = it;
    }
    return result; // returns last matching or last if none
}

class Solution {
public:
    string reverseVowels(string s) {
        auto forwardIt = find_if(s.begin(), s.end(), isVowel);
        auto backwardIt = find_last_if(s.begin(), s.end(), isVowel);
        // can't compare forward iterators with backward iterators 
        if (forwardIt == backwardIt || forwardIt == s.end()) return s;
        while (forwardIt < backwardIt) {
            swap(*forwardIt, *backwardIt);
            forwardIt = find_if(forwardIt + 1, s.end(), isVowel);
            backwardIt = find_last_if(s.begin(), backwardIt, isVowel);
        }
        return s;
    }
}; */

/* 
 *	solution below is slightly faster
 */

#include <algorithm>

class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;
        unordered_set<char> vowels {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        while (left < right) {
            while (left < right && vowels.find(s[left]) == vowels.end())
                left++;
            while (left < right && vowels.find(s[right]) == vowels.end())
                right--;
            if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
	}
} ;
// @lc code=end

