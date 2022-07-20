#include <bits/stdc++.h>
using namespace std;

int numMatchingSubseq(string s, vector<string> &words)
{
    unordered_map<char, vector<int>> mp;
    for (int i = 0; i < s.length(); i++)
        mp[s[i]].emplace_back(i);
    int count = 0;
    for (int i = 0; i < words.size(); i++)
    {
        bool flag = true;
        int next;
        if (!mp.count(words[i][0]))
            continue;
        int first = mp[words[i][0]].front(); 
        for (int j = 1; j < words[i].size(); j++)
        {
            if (!mp.count(words[i][j]))
            {
                flag = false;
                break;
            }
            for (int index : mp[words[i][j]])
            {
                if (index > first)
                {
                    next = index; // 7
                    break;
                }
                next = -1;
            }

            if (next == -1)
            {
                flag = false;
                break;
            }

            first = next; 
        }

        if (flag)
            count++;
    }

    return count;
}

int main()
{
    string s = "dsahjpjauf";

    vector<string> vs = {"ahjpjau","ja","ahbwzgqnuk","tnmlanowax"};
    cout << numMatchingSubseq(s, vs);
}
