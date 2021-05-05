class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = 0;
        int maxSum = INT_MIN;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (cur >= 0)
            {
                cur += nums[i];
            }
            else
            {
                cur = nums[i];
            }
            maxSum = max(maxSum, cur);
        }
        return maxSum;
    }
};