#include "common.h"

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix.size() == 1)
        {
            return;
        }
        int row = matrix.size();

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < i; ++j)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (auto& ele : matrix)
        {
            reverse(ele.begin(), ele.end());
        }
        return;
    }
};