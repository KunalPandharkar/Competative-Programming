#include <bits/stdc++.h>
using namespace std;

// without binary search
//  int searchInsert(vector<int> &nums, int target)
//  {
//      if (nums.size() == 1)
//          if (nums[0] >= target)
//              return 0;
//          else
//              return 1;

//     if (target > nums[nums.size() - 1])
//         return nums.size();

//     if (target == nums[nums.size() - 1])
//         return nums.size() - 1;

//     auto it = find(nums.begin(), nums.end(), target);

//     if (it != nums.end())
//         return it - nums.begin();

//     for (auto it : nums)
//         if (target < it)
//         {
//             auto bt = find(nums.begin(), nums.end(), it);
//             return bt - nums.begin();
//         }

//     return 0;
// }
int searchInsert(vector<int> &nums, int target)
{

    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{
    vector<int> vs = {1, 2, 3, 6};
    int target = 5;
    cout << searchInsert(vs, target);
}
