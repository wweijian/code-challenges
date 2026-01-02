#include <vector>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (auto it = flowerbed.begin(); it < flowerbed.end() && n != 0; it++) {
            if (*it == 1) it++;
            else if ((it + 1 == flowerbed.end() || *(it + 1) == 0) 
                    && (it == flowerbed.begin() || *(it - 1) == 0))
            {
                *it = 1;
                n--;
                it++;
            }
        }
        return (n == 0);
    }
};
