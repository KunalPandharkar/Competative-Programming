#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    vector<char> ms;
    set<int> len;

    for (int i = 0; i < s.length(); i++)
    {
        ms.emplace_back(s[i]);
        if (count(ms.begin(), ms.end(), s[i]) > 1)
        {
            len.emplace(ms.size() - 1);
            if (s[i] == ms.at(0))
                ms.erase(ms.begin());
            else
                ms.erase(ms.begin(), ++(find(ms.begin(), ms.end(), s[i])));
        }
    }

    len.emplace(ms.size());

    return *max_element(len.begin(), len.end());
}

int main()
{
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s);
}