#include <bits/stdc++.h>
using namespace std;

vector<int> MaxandMinElement(vector<int> &arr, int k)
{

    vector<int> el;

    // using set
    //  set<int> s(arr.begin(), arr.end());
    //  el.emplace_back(*next(s.begin(), k - 1));
    //  el.emplace_back(*next(s.rbegin(), k - 1));
    
    //using vector
    sort(arr.begin(), arr.end());
    el.emplace_back(arr[k-1]);
    el.emplace_back(arr[arr.size() - k]);



    return el;
}

int main()
{
    int N;
    cin >> N;
    int k;
    cin >> k;
    vector<int> arr;

    while (N--)
    {
        int x;
        cin >> x;
        arr.emplace_back(x);
    }

    vector<int> ans = MaxandMinElement(arr, k);

    for (auto it : ans)
    {
        cout << it << " ";
    }
}
