#include "makeStructs.h"

vector<int> wslFunc::makeVector(string strVector)
{
    // [1,2,3,4,5]
    vector<int> res;
    string tmp;
    for (auto itr : strVector)
    {
        if (itr == '[')
        {
            continue;
        }
        if (itr == ',' || itr == ']')
        {
            int num = stoi(tmp);
            res.push_back(num);
            string().swap(tmp);
            continue;
        }
        tmp.push_back(itr);
        
    }
    return res;
}

vector<vector<int>> wslFunc::makeMatrix(string strMatrix)
{
    // [[1,2,2,1],[3,1,2],[1,3,2],[2,4],[3,1,2],[1,3,1,1]]
    vector<vector<int>> res;
    strMatrix = strMatrix.substr(1, strMatrix.length() - 2);
    size_t nBeg = 0;
    auto npos = strMatrix.find("]");
    while (npos != string::npos)
    {
        string tmp = strMatrix.substr(nBeg, npos + 1 - nBeg);
        auto vec = makeVector(tmp);
        res.push_back(vec);
        nBeg = npos + 2;
        npos = strMatrix.find("]", npos + 1);
    };
    return res;
}