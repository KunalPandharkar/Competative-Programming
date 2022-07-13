#include <bits/stdc++.h>
using namespace std;

int bitwiseComplement(int n)
{
    if (n == 0)
        return 1;

    double binary = 0;
    int count = 0;
    vector<int> v;
    while (n != 0)
    {
        int bit = n & 1; // 1 0 1 1
        if (!bit)
            binary += pow(2, count);
        count++;
        n = n >> 1;
    }

    // for (int i = 0; i < v.size(); i++)
    // {

    //     if (v[i] == 1)
    //         binary += pow(2, i);
    // }

    return binary;
}

int main()
{
    int n;
    cin >> n;

    cout << bitwiseComplement(n);
}
