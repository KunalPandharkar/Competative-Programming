#include <bits/stdc++.h>
using namespace std;

vector<int> Reverse(vector<int> &arr)
{
    // reverse(arr.begin(), arr.end());

    int lastIndex = arr.size() - 1;
    // for (int i = 0; i < arr.size() / 2; i++) // 0
    // {
    //     // swap(arr[i], arr[lastIndex--]);

    //     int temp = arr[i];
    //     arr[i] = arr[lastIndex];
    //     arr[lastIndex] = temp;
    //     lastIndex--;
    // }

    int i = 0;

    while (i < arr.size() / 2)
    {
        swap(arr[i], arr[lastIndex--]);
        i++;
    }

    return arr;
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

    vector<int> ans = Reverse(arr);

    for (auto it : ans)
    {
        cout << it << " ";
    }
}
