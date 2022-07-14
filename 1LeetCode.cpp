#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> Nums;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums.size() - 1; j++)
        {
            if (nums[i] + nums[j + 1] == target)
            {
                Nums.push_back(i);
                Nums.push_back(j + 1);
                return Nums;
            }
        }
    }

    return Nums;
}

int main()
{
    vector<int> vs = {0, 4, 3, 0};
    int target = 0;
    vector<int> v = twoSum(vs, target);

    for (auto it : v)
    {
        cout << it << " ";
    }
}
