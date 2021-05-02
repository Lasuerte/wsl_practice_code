#include "common.h"

class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        map<int, int> countBricks{ {0,0} };
        int nMaxLen = 0;
        for (auto itr : wall[0])
        {
            nMaxLen += itr;
        }
        for (auto level : wall)
        {
            int nLen = 0;
            for (auto len : level)
            {
                nLen += len;
                if (nLen == nMaxLen)
                {
                    continue;
                }
                if (countBricks.count(nLen) == 0)
                {
                    countBricks.insert({ nLen,1 });
                    continue;
                }
                
                ++countBricks[nLen];
            }
        }
        int nMaxJump = 0;
        for (auto itr : countBricks)
        {
            if (itr.second > nMaxJump)
            {
                nMaxJump = itr.second;
            }
        }
        return wall.size() - nMaxJump;
    }
};