#include "common.h"
#include <bitset>
class Solution {
public:
    int reverse(int x) {
        string orgNum = to_string(x);
        string revNum = orgNum;
        int i = 0, j = orgNum.size() - 1;
        if (revNum[0] == '-')
        {
            ++i;
        }
        while (i < j)
        {
            swap(revNum[i], revNum[j]);
            ++i;
            --j;
        }
        if (!compare(revNum))
        {
            return 0;
        }

        return stoi(revNum);
    }
    bool compare(string revNum)
    {
        string strMax = to_string(INT_MAX);
        string strMin = to_string(INT_MIN);
        bool negtive = revNum[0] == '-';
        if (negtive)
        {
            if (revNum.length() < strMin.length())
            {
                return true;
            }
            if (revNum.length() > strMin.length())
            {
                return false;
            }
            for (int i = 0; i < revNum.length(); ++i)
            {
                if (revNum[i] == strMin[i])
                {
                    continue;
                }
                if (revNum[i] < strMin[i])
                {
                    return true;
                }
                if (revNum[i] > strMin[i])
                {
                    return false;
                }
            }
            return true;
        }
        else
        {
            if (revNum.length() < strMax.length())
            {
                return true;
            }
            if (revNum.length() > strMax.length())
            {
                return false;
            }
            for (int i = 0; i < revNum.length(); ++i)
            {
                if (revNum[i] == strMax[i])
                {
                    continue;
                }
                if (revNum[i] < strMax[i])
                {
                    return true;
                }
                if (revNum[i] > strMax[i])
                {
                    return false;
                }
            }
            return true;
        }



    }
};