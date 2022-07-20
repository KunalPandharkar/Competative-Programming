#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<int> v;
    vector<int> sums;
    vector<vector<int>> ans;
    v.emplace_back(1);
    ans.emplace_back(v);

    if (numRows == 1)
        return ans;
    v.emplace_back(1);
    ans.emplace_back(v);
    if (numRows == 2)
        return ans;

    for (int i = 3; i <= numRows; i++)
    {
        for (int j = 0; j < (i - 2); j++)
        {
            int sum = v[j] + (v[j + 1]);
            sums.emplace_back(sum);
        }

        v.erase(v.begin() + 1, v.end());
        for (auto it : sums)
            v.emplace_back(it);
        sums.clear();
        v.emplace_back(1);
        ans.emplace_back(v);
    }
    return ans;
}

int main()
{
}