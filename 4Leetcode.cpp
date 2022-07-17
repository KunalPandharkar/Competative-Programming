#include <bits/stdc++.h>

using namespace std;
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    multiset<int> s(nums1.begin(), nums1.end());
    for (auto it : nums2)
        s.emplace(it);
    int size = (s.size() / 2);
    auto it = s.begin();
    if (s.size() & 1)
        return *next(it, size);
    return (*next(it, size) + *next(it, size - 1)) / 2.0;
}
int main()
{
    vector<int> v1 = {1, 1};
    vector<int> v2 = {1, 2};

    cout << findMedianSortedArrays(v1, v2);
}
