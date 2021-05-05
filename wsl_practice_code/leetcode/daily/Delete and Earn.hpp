#include "common.h"
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int, int> mapIdx;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (mapIdx.count(nums[i]) == 0)
            {
                mapIdx[nums[i]] = 1;
                continue;
            }
            mapIdx[nums[i]]++;
        }
        vector<int> dp(mapIdx.size(), 0);
        // dp[i]�����i��ʱ�����ֵ
        // ��Ŀת��Ϊ��ҽ��ᣨ�����������n�ң�
        auto itr = mapIdx.begin();
        size_t i = 0;
        dp[0] = itr->first * itr->second;
        ++itr, ++i;
        for (; itr != mapIdx.end(); ++itr, ++i)
        {
            
            if ((--itr)->first + 1 != (++itr)->first)
            {
                dp[i] = dp[i - 1] + itr->first * itr->second;
            }
            else
            {
                int pickIAPre = i == 1 ? 0 : dp[i - 2];
                // max(��ѡi��ѡi)
                dp[i] = max(dp[i - 1], pickIAPre + itr->first * itr->second);
            }
            
        }
        return *max_element(dp.begin(), dp.end());
    }
};