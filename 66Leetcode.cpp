#include <bits/stdc++.h>

using namespace std;
vector<int> plusOne(vector<int> &digits)
{
    int size = digits.size() - 1;
    int lastel = digits[size];
    int i = 0;

    if (++lastel > 9)
    {
        digits.push_back(0);
        for (i = size; i > 0; i--)
            if (digits[i] + 1 > 9)
                digits[i] = 0;
            else
                break;
        int sum = digits[i] + 1;
        if (sum > 9)
            digits[i] = 1;
        else
        {
            digits.pop_back();
            digits[i]++;
        }
    }
    else
        digits[size]++;

    return digits;
}
int main()
{
    vector<int> v = {9, 9, 9};

    vector<int> ans = plusOne(v);

    for (int i : ans)
    {
        cout << i << " ";
    }
}