#include <bits/stdc++.h>
using namespace std;

vector<int> MaxandMinElement(vector<int> &arr)
{
    vector<int> el;
    // Method 1
    int minel, maxel;
    minel = arr[0];
    maxel = arr[0];
    for (int i = 1; i <= arr.size() - 1; i++)
    {
        if (minel > arr[i])
            minel = arr[i];

        if (maxel < arr[i])
            maxel = arr[i];
    }
    el.emplace_back(minel);
    el.emplace_back(maxel);

    // Method 2
    //  sort(arr.begin(),arr.end());
    //  el.emplace_back(arr[0]);
    //  el.emplace_back(arr[arr.size() - 1]);

    // Method 3
    //  el.emplace_back(*min_element(arr.begin(),arr.end()));
    //  el.emplace_back(*max_element(arr.begin(),arr.end()));

    return el;
}

int main()
{
    int N;
    cin >> N;
    vector<int> arr;

    while (N--)
    {
        int x;
        cin >> x;
        arr.emplace_back(x);
    }

    vector<int> ans = MaxandMinElement(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }
}
